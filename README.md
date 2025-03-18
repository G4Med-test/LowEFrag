# G4LowEFrag
Validation of Geant4 against nuclear fragmentation data

Update of the validation in:
C. Mancini-Terracciano et al. IFMBE Proceedings,
vol. 68, no. 126. pp. 1–11, May 2018
doi: 10.1007/978-981-10-9035-6_126.

Experimental data from: De Napoli et al. Phys. Med. Biol., 
vol. 57, no. 22, pp. 7651–7671, Nov. 2012 
doi: 10.1088/0031-9155/57/22/7651.

Included in G4-Med:
P. Arce et al. Med. Phys.
vol. 48, iss. 1, pp. 19-56, Jan. 2021
doi: 10.1002/mp.14226

## How to build the container
From the `containers/` directory, run:
```bash
apptainer build LowEFrag.sif Apptainer.def

## How to run the container
```bash
./LowEFrag.sif <macrofile>