#!/bin/bash
# This script filters valid phone numbers from a text file.
# Usage: ./solution_1.sh <file.txt>

grep -E '^(\([0-9]{3}\) [0-9]{3}-[0-9]{4}|[0-9]{3}-[0-9]{3}-[0-9]{4})$' $1