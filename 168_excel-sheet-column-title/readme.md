# Problem 168: Excel Sheet Column Title

**Problem Link**: [LeetCode Problem 168](https://leetcode.com/problems/excel-sheet-column-title/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Math, Base Conversion, Strings

## Problem Statement

Given an integer `columnNumber`, return its corresponding column title as it appears in an Excel sheet.

For example:

| A  → 1 |  
| B  → 2 |  
| C  → 3 |  
| ...   |  
| Z  → 26 |  
| AA → 27 |  
| AB → 28 |  
| ...   |

### Example 1:

**Input**: `columnNumber = 1`  
**Output**: `"A"`

### Example 2:

**Input**: `columnNumber = 28`  
**Output**: `"AB"`

### Example 3:

**Input**: `columnNumber = 701`  
**Output**: `"ZY"`

### Constraints:

- 1 <= columnNumber <= 2³¹ - 1

## Solution Explanation

The problem is similar to converting a number to a base-26 system, where the "digits" are represented by the letters 'A' to 'Z'. However, the system is 1-based, so we need to adjust the number by subtracting 1 at each step to handle this.

### Approach 1: Iterative (C++):
We use an iterative approach to compute each character of the column title starting from the least significant character (rightmost) to the most significant (leftmost). In each step, we:
- Subtract 1 from the number to convert it to 0-indexed.
- Find the character for the current position.
- Move on to the next "digit" by dividing the number by 26.

### Approach 2: Recursive (Dart):
This approach works similarly to the iterative solution but uses recursion. Each recursive call computes the character for the current position and reduces the problem size by dividing the number by 26, eventually constructing the entire string from left to right.

## Code

- [C++ Solution (Iterative Approach)](./solution_1.cpp)
- [Dart Solution (Recursive Approach)](./solution_2.dart)

## Test Cases:

### Test Case 1:
**Input**: `columnNumber = 1`  
**Output**: `"A"`

### Test Case 2:
**Input**: `columnNumber = 28`  
**Output**: `"AB"`

### Test Case 3:
**Input**: `columnNumber = 4009`  
**Output**: `"EXE"`

### Additional Test Case:
**Input**: `columnNumber = 52`  
**Output**: `"AZ"`

## Complexity Analysis

### C++ Solution (Iterative Approach):
- **Time Complexity**: O(log26 n), where `n` is the column number. This is because each iteration reduces the number by dividing it by 26.
- **Space Complexity**: O(1) (excluding the output string).

### Dart Solution (Recursive Approach):
- **Time Complexity**: O(log26 n), similar to the C++ approach.
- **Space Complexity**: O(log26 n) due to the recursion stack.