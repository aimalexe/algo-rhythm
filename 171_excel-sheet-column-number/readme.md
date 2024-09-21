# Problem 171: Excel Sheet Column Number

**Problem Link**: [LeetCode Problem 171](https://leetcode.com/problems/excel-sheet-column-number/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Strings, Base Conversion, Iteration, Recursion
s
## Problem Statement

Given a string `columnTitle` that represents the column title as it appears in an Excel sheet, return its corresponding column number.

For example:

- `A -> 1`
- `B -> 2`
- `C -> 3`
- ...
- `Z -> 26`
- `AA -> 27`
- `AB -> 28`
- ...

### Example 1:
**Input**: 
```
columnTitle = "A"
```
**Output**: 
```
1
```

### Example 2:
**Input**: 
```
columnTitle = "AB"
```
**Output**: 
```
28
```

### Example 3:
**Input**: 
```
columnTitle = "ZY"
```
**Output**: 
```
701
```

### Constraints:
- 1 <= `columnTitle.length` <= 7
- `columnTitle` consists only of uppercase English letters.
- `columnTitle` is in the range `["A", "FXSHRXW"]`.

## Solution Explanation

This problem involves converting a string from a base-26 numeral system to a base-10 integer, where 'A' is treated as 1, 'B' as 2, ..., and 'Z' as 26.

### Approach 1: Iterative (C++)
In this approach, we iterate through each character in the string, updating the result by multiplying the current value by 26 and adding the 1-based index of the current character (where 'A' is 1, 'B' is 2, ..., 'Z' is 26).

### Approach 2: Recursive (Python)
The recursive approach handles one character at a time from the end of the string. It calculates the corresponding column number for the last character and recursively calls the function for the substring excluding the last character. The result is built by summing these calculations, multiplying each by powers of 26.

## Code

- [C++ Solution (Iterative Approach)](./solution_1.cpp)
- [Python Solution (Recursive Approach)](./solution_2.py)
  
## Complexity Analysis

### C++ Solution (Iterative Approach):
- **Time Complexity**: O(n), where `n` is the length of the column title string. We traverse the string once.
- **Space Complexity**: O(1), as only a few variables are used.

### Python Solution (Recursive Approach):
- **Time Complexity**: O(n), where `n` is the length of the column title string.
- **Space Complexity**: O(n), due to the recursive call stack.