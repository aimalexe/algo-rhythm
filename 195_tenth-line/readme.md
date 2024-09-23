# Problem 195: Tenth Line

**Problem Link**: [LeetCode - Tenth Line](https://leetcode.com/problems/tenth-line/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: File Processing, Shell Script, PowerShell

## Problem Statement

Given a text file `file.txt` that contains a list of lines, print the 10th line of the file.

### Example:

Assume that `file.txt` contains the following content:

```
Line 1
Line 2
Line 3
Line 4
Line 5
Line 6
Line 7
Line 8
Line 9
Line 10
```

Your script should output the 10th line, which is:
```
Line 10
```

### Note:
1. If the file contains fewer than 10 lines, the script should output an appropriate message.
2. Try to explore different possible solutions.

## Solution Explanation

There are different ways to approach this problem, including using **Shell** (`sh`) or **PowerShell** (`ps1`).

### Approach

1. **Shell Script (sh)**:
   - Use the `sed` command to directly print the 10th line.
   - Check if the file has fewer than 10 lines by using `wc -l`.
   - If the file has fewer than 10 lines, print a message indicating this.

2. **PowerShell (ps1)**:
   - Use the `Get-Content` cmdlet to read the file into an array.
   - Check the length of the array to ensure it has at least 10 lines.
   - If the file contains fewer than 10 lines, print a message. Otherwise, print the 10th line.

## Code
- [Shell Script](./solution_1.sh)
- [PowerShell Script](./solution_2.ps1)

## Complexity Analysis

- **Time Complexity**: 
  - **Shell Script**: O(1) for retrieving the 10th line using `sed` (assuming file content is read in chunks).
  - **PowerShell**: O(1) for accessing the 10th line from the array (after reading the file content).
  
- **Space Complexity**: 
  - **Shell Script**: O(1), as it reads the file line by line.
  - **PowerShell**: O(n), where `n` is the number of lines in the file, because the entire file is loaded into memory.

## Usage

To run the Shell script:
```bash
chmod +x solution_1.sh
./solution_1.sh file.txt
```

To run the PowerShell script:
```powershell
.\solution_2.ps1 -FilePath file.txt
```

These scripts handle cases where the file contains fewer than 10 lines and output the correct message or the 10th line accordingly.