#!/bin/bash
# This script prints the 10th line of the file.
# Usage: ./solution_1.sh <file.txt>

sed -n '10p' "$1"
