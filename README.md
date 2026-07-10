# DanganRonpaGuide

## Requirements

To build the project you need:

* **g++** (GCC, e.g. `sudo apt install build-essential` on Debian/Ubuntu)
* A Linux terminal

---

## How to Build

### Option 1 — Using the shell script

Run this inside the project folder:

```
./build.sh
```

This will compile the project and generate:

```
DanganRonpaGuide
```

---

### Option 2 — Build manually

If you want to compile it yourself:

```
g++ -O3 src/main.cpp src/guides.cpp -o DanganRonpaGuide
```

---

## How to Run

After building, run:

```
./DanganRonpaGuide
```

Run it from the project root (`/home/t4r/Coding/! linux/Danganronpa-guide`) so the relative `resources/` paths resolve correctly.
