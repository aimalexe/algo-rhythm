# Problem 193: Valid Phone Numbers

**Problem Link**: [LeetCode - Valid Phone Numbers](https://leetcode.com/problems/valid-phone-numbers/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Regular Expressions, Shell Script, PowerShell, Text Processing

## Problem Statement

Given a text file `file.txt` that contains a list of phone numbers (one per line), write a one-liner bash script and PowerShell script to print all valid phone numbers. 

You may assume that a valid phone number must appear in one of the following two formats:
- `(xxx) xxx-xxxx`
- `xxx-xxx-xxxx`

(x means a digit).

You may also assume each line in the text file must not contain leading or trailing white spaces.

### Example:

Assume that `phone-numbers-data.txt` contains the following content:
```
987-123-4567
123 456 7890
(123) 456-7890
```

Your script should output the following valid phone numbers:
```
987-123-4567
(123) 456-7890
```

## Solution Explanation

We solve this problem using two different approaches:

1. **Bash Script**: The bash script utilizes `grep` to filter lines from the input file based on the regular expression patterns that match the valid phone number formats.
   
2. **PowerShell Script**: The PowerShell script reads the file line by line and checks each line against regular expressions to determine if they match the valid phone number formats.

### Approach

#### Bash Script
- **`grep`** command is used with an extended regular expression to match lines that have either of the valid formats.
- The regular expression checks for the patterns `(xxx) xxx-xxxx` or `xxx-xxx-xxxx`.

#### PowerShell Script
- The script uses `Get-Content` to read the file and loops over each line.
- Regular expressions are used to match the valid phone number formats.
- The matched valid phone numbers are printed.

## Code
- [Bash Solution](./solution_1.sh)
- [PowerShell Solution](./solution_2.ps1)

## Complexity Analysis

- **Time Complexity**: 
  - **Bash**: O(n), where `n` is the number of lines in the file. The `grep` command processes each line once.
  - **PowerShell**: O(n), as the script reads each line from the file and checks the regular expression.
  
- **Space Complexity**: O(1) for both scripts, as no additional data structures are used except variables for storing the regular expressions and file content.