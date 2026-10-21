# Portal JSON parser

Adapted from `geant-config-generator/tests/geant4/LowEFrag/{parser.py,LowEFragExp.py}`
at commit `0bf42953c9c98ac6ecccf077e7c7fe2c4ceb7307`.

`config.json` selects `bic.mac` and `incl.mac`. The shared ci-workflows exporter
imports this parser and `LowEFragExp.py`. It derives the model and event count from
each macro, and the ROOT file name from its `/histoManager/setFileName` (written in
the run directory, e.g. `/outputs/bic.root`). The Geant4 default backend and macro
filenames are set to ROOT. The shared `ghcr.io/g4med-test/geant4-alma9` base already contains
Python 3.12 and uproot. The workflow exports JSON inside Apptainer, without PyROOT
or runtime pip installs. `requirements.txt` remains available for local use.

All 54 isotope/angle histograms and their experimental binning must be present.
Normalization remains `1051.9 / NEVENTS / solidAngle / experimentalBinWidth`, with
the same scale applied to the recorded bin errors. `uproot` reads `fSumw2` when
present and uses Poisson errors otherwise. Underflow/overflow are excluded. The beam and target metadata match this
application's fixed 62 MeV/n C12 beam on natural carbon.

The pipeline uploads `validation-json/results.json` (an array of plot objects)
and `plots/*.json` (the original one-object-per-file format), plus raw artifacts.
See [ci-workflows](https://github.com/G4Med-test/ci-workflows) for local CLI usage.
