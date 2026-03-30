# DanganRonpaGuide

## Requirements

To build the project you need:

* **g++** (MinGW / MSYS2 / GCC for Windows)
* Windows 10 or Windows 11
* Command Prompt or PowerShell

---

## How to Build

### Option 1 — Using the batch file

Run this inside the project folder:

```
.\build.bat
```

This will compile the project and generate:

```
DanganRonpaGuide.exe
```

---

### Option 2 — Build manually

If you want to compile it yourself:

```
g++ -O3 src/main.cpp src/guides.cpp -o DanganRonpaGuide.exe
```

---

## How to Run

After building, run:

```
.\DanganRonpaGuide.exe
```
