# G4LowEFrag

**Validation of Geant4 against nuclear fragmentation data**

[![Apptainer Build and Deploy](https://github.com/G4Med-test/LowEFrag/actions/workflows/apptainer-build-deploy.yml/badge.svg)](https://github.com/G4Med-test/LowEFrag/actions/workflows/apptainer-build-deploy.yml)
[![Container unit test](https://github.com/G4Med-test/LowEFrag/actions/workflows/apptainer-run-unit.yml/badge.svg)](https://github.com/G4Med-test/LowEFrag/actions/workflows/apptainer-run-unit.yml)

---

## 📚 References

- **Update of the validation in:**  
  C. Mancini-Terracciano et al., *IFMBE Proceedings*,  
  vol. 68, no. 126, pp. 1–11, May 2018.  
  [https://doi.org/10.1007/978-981-10-9035-6_126](https://doi.org/10.1007/978-981-10-9035-6_126)

- **Experimental data from:**  
  De Napoli et al., *Phys. Med. Biol.*,  
  vol. 57, no. 22, pp. 7651–7671, Nov. 2012.  
  [https://doi.org/10.1088/0031-9155/57/22/7651](https://doi.org/10.1088/0031-9155/57/22/7651)

- **Included in G4-Med:**  
  P. Arce et al., *Med. Phys.*,  
  vol. 48, iss. 1, pp. 19–56, Jan. 2021.  
  [https://doi.org/10.1002/mp.14226](https://doi.org/10.1002/mp.14226)

---

## 🛠️ How to build the container

From the `containers/` directory:
```bash
apptainer build LowEFrag.sif Apptainer.def
```

> Alternatively, you can pull a prebuilt container from GHCR (see below).

---

## 🚀 How to run the container

Geant4 datasets are located externally, mount them:
```bash
apptainer run   -B /path/to/geant4_data:/opt/geant4/data   LowEFrag.sif <macrofile>
```

---

## 📦 Container on GHCR

[![Container on GHCR](https://img.shields.io/badge/Container-GHCR-blue?logo=github)](https://github.com/orgs/G4Med-test/packages?repo_name=LowEFrag)
[![Pull from GHCR](https://img.shields.io/badge/Pull%20from-ghcr.io-blueviolet?logo=github)](https://ghcr.io/)

### ➡️ Pull the latest container:
```bash
apptainer pull oras://ghcr.io/g4med-test/lowefrag:<tag>
```
> Replace `<tag>` with the desired release tag or commit hash.

---

## ✅ GitHub Actions workflows
the workflow is now defined in a dedicated repo:
[url]https://github.com/G4Med-test/ci-workflows/[/url]
