"""LowEFrag portal export, adapted from geant-config-generator's ROOT parser.

The physics normalization and experimental bin widths are unchanged. Current
ROOT histograms are read with uproot, without requiring PyROOT on the runner.
"""
import math
from pathlib import Path, PurePosixPath

from geantval import getJSON, one_command, single_run
from LowEFragExp import binWidth, binParams

CS = 1051.9
SYMBOLS = {1: "H", 2: "He", 3: "Li", 4: "Be", 5: "B"}


def metadata(commands):
    return {"TEST": "LowEFrag",
            "PHYSLIST": one_command(commands, "/physics/setIonInelasticProcess").upper(),
            "NEVENTS": single_run(commands),
            "OUTPUT": output_name(one_command(commands, "/histoManager/setFileName"))}


def output_name(value):
    """ROOT file written by the macro in the run directory (relative or /outputs)."""
    path = PurePosixPath(value)
    if str(path.parent) not in (".", "/outputs") or path.suffix not in ("", ".root"):
        raise ValueError("Write the ROOT file in the run directory: " + value)
    return path.name if path.suffix else path.name + ".root"


def read_histograms(path):
    # Lazy import: matrix construction only reads metadata and needs no ROOT reader.
    import uproot

    histograms = {}
    with uproot.open(path) as root:
        for name, hist in root.items(cycle=False, recursive=False):
            if not hist.classname.startswith("TH1"):
                raise ValueError("Expected a TH1 histogram: " + name)
            edges = hist.axis().edges(flow=False).tolist()
            values = hist.values(flow=False).tolist()
            errors = hist.errors(flow=False).tolist()
            histograms[name] = (edges[:-1], edges[1:], values, errors)
    return histograms


def parse(job):
    histograms = read_histograms(Path(job["path"]) / job["OUTPUT"])
    expected = {"h%s%d_%g" % (SYMBOLS[z], a, angle) for a, z, angle, *_ in binParams}
    if set(histograms) != expected:
        raise ValueError("Incomplete/unexpected LowEFrag histograms: missing=%s extra=%s" %
                         (sorted(expected - set(histograms)), sorted(set(histograms) - expected)))
    for a, z, angle, acceptance, n, low, high in binParams:
        isotope = SYMBOLS[z] + str(a)
        name = "h%s_%g" % (isotope, angle)
        xmin, xmax, values, errors = histograms[name]
        if (len(values) != n or not math.isclose(xmin[0], low, rel_tol=1e-5, abs_tol=1e-5)
                or not math.isclose(xmax[-1], high, rel_tol=1e-5)):
            raise ValueError("Binning differs from experimental normalization: " + name)
        width = next(w for aa, zz, ang, acc, w in binWidth
                     if (aa, zz, ang, acc) == (a, z, angle, acceptance))
        omega = (math.cos(math.radians(angle - acceptance)) -
                 math.cos(math.radians(angle + acceptance))) * 2. * math.pi
        scale = CS / float(job["NEVENTS"]) / omega / width
        yield getJSON(job, "histogram", mctool_name="GEANT4",
                      mctool_model=job["PHYSLIST"], observableName="D2(SIG)/DE/DOMEGA",
                      targetName="Cnat", beamParticle="C12", beamEnergies=[62],
                      parameters=[{"names": "theta", "values": "{0} deg".format(angle)}],
                      secondaryParticle=isotope,
                      title="^{12}C + ^{nat}C #rightarrow " + isotope + " at 62 MeV/n",
                      xAxisName="E (MeV/n)",
                      yAxisName="#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]",
                      binEdgeLow=xmin, binEdgeHigh=xmax,
                      binContent=[v * scale for v in values],
                      yStatErrorsPlus=[e * scale for e in errors],
                      yStatErrorsMinus=[e * scale for e in errors])
