#!/usr/bin/env python3
"""Compare LowEFrag runs with the De Napoli et al. (2012) data, without ROOT.

Each run is a macro and the ROOT file it produced, e.g.

    python3 analysis/plot.py macro/bic.mac:out/bic.root macro/incl.mac:out/incl.root

The histograms are read with uproot and normalized by validation/parser.py, the
same code that exports the portal JSON. One PDF per isotope is written, with one
panel per angle.
"""
import argparse
from collections import defaultdict
import importlib.util
import math
import os
from pathlib import Path
import sys

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

REPO = Path(__file__).resolve().parents[1]
EXP_DATA = REPO / "analysis/expData"
# geantval.py (portal JSON helpers) lives in ci-workflows, checked out next to this repo.
TOOLS = Path(os.environ.get("G4MED_TOOLS", REPO.parent / "ci-workflows/validation"))
sys.path[:0] = [str(TOOLS), str(REPO / "validation")]
from geantval import read_macro  # noqa: E402

_spec = importlib.util.spec_from_file_location("lowefrag_parser", REPO / "validation/parser.py")
lowefrag = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(lowefrag)


def experimental(isotope, A):
    """{angle: (E/A, half bin width/A, cross section, error)} from the EXFOR table."""
    data = defaultdict(lambda: ([], [], [], []))
    for line in (EXP_DATA / (isotope + ".txt")).read_text().splitlines():
        fields = line.split()
        try:
            cs, cs_err, _, energy, energy_err, angle = map(float, fields)
        except ValueError:
            continue  # EXFOR header and comment lines.
        for column, value in zip(data[angle], (energy / A, energy_err / A, cs, cs_err)):
            column.append(value)
    return data


def simulated(runs):
    """{isotope: {angle: [(model, record)]}} from every macro/ROOT file pair."""
    result = defaultdict(lambda: defaultdict(list))
    for macro, root in runs:
        job = lowefrag.metadata(read_macro(Path(macro)))
        job.update(path=str(Path(root).parent), OUTPUT=Path(root).name, VERSION="")
        for record in lowefrag.parse(job):
            angle = float(record["metadata"]["parameters"][0]["values"].split()[0])
            result[record["metadata"]["secondaryParticle"]][angle].append((job["PHYSLIST"], record))
    return result


def plot_isotope(isotope, angles, output):
    A = int("".join(c for c in isotope if c.isdigit()))
    element = isotope.rstrip("0123456789")
    data = experimental(isotope, A)
    rows = math.ceil(len(angles) / 2)
    fig, axes = plt.subplots(rows, 2, figsize=(8, 3 * rows), sharex=True, sharey=True,
                             squeeze=False, gridspec_kw={"hspace": 0, "wspace": 0})
    for ax, angle in zip(axes.flat, sorted(angles)):
        exp = next((v for a, v in data.items() if math.isclose(a, angle)), None)
        if exp:
            ax.errorbar(exp[0], exp[2], xerr=exp[1], yerr=exp[3], fmt="k+", label="Exp. data")
        for model, record in angles[angle]:
            hist = record["histogram"]
            edges = hist["binEdgeLow"] + hist["binEdgeHigh"][-1:]
            ax.stairs(hist["binContent"], edges, baseline=None, label=model)
        ax.set_yscale("log")
        ax.text(0.97, 0.95, f"θ = {angle:g}°", transform=ax.transAxes, ha="right", va="top")
    for ax in axes.flat[len(angles):]:
        ax.set_visible(False)
    axes[0, 0].legend(loc="lower left", fontsize="small")
    for ax in axes[-1]:
        ax.set_xlabel("E [MeV/n]")
    for ax in axes[:, 0]:
        ax.set_ylabel("∂²σ/∂E∂Ω [mb/sr/(MeV/n)]")
    fig.suptitle(f"$^{{12}}$C + $^{{nat}}$C → $^{{{A}}}${element} at 62 MeV/n")
    fig.savefig(output / (isotope + ".pdf"), bbox_inches="tight")
    plt.close(fig)


def main():
    cli = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    cli.add_argument("runs", nargs="+", metavar="MACRO:ROOT")
    cli.add_argument("--output", type=Path, default=Path("plot"))
    args = cli.parse_args()
    runs = [run.split(":", 1) for run in args.runs]
    if any(len(run) != 2 for run in runs):
        cli.error("each run is MACRO:ROOT")
    args.output.mkdir(parents=True, exist_ok=True)
    for isotope, angles in simulated(runs).items():
        plot_isotope(isotope, angles, args.output)
        print("Wrote", args.output / (isotope + ".pdf"))


if __name__ == "__main__":
    main()
