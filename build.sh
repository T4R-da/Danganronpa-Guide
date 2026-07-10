#!/usr/bin/env bash
set -e

g++ -O3 src/main.cpp src/guides.cpp -o DanganRonpaGuide

echo "Build complete: ./DanganRonpaGuide"
