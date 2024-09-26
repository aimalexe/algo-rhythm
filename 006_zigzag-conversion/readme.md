# Problem 6: Zigzag Conversion

**Problem Link**: [Zigzag Conversion on LeetCode](https://leetcode.com/problems/zigzag-conversion/)

**Difficulty Level**: Medium

**Key Concepts/Tags**: String Manipulation

## Problem Statement

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows, as shown in the example below:

```
P   A   H   N
A P L S I I G
Y   I   R
```

And then the characters are read row by row: `"PAHNAPLSIIGYIR"`.

Given a string `s` and a number of rows `numRows`, implement a function `convert` that converts the string into a zigzag pattern with the given number of rows and returns the result read row by row.

## Solution Explanation

### Approach

1. **Simulating the Zigzag Pattern**:
   - We simulate the zigzag traversal by maintaining multiple rows. The characters from the string are placed into these rows in a zigzag fashion.
   - We move downwards through the rows until we hit the last row, then we move upwards until we reach the first row, repeating this pattern.

2. **Conditions**:
   - If `numRows` is 1, there is no zigzag pattern, and we return the string as is.
   
3. **Efficient Construction**:
   - We keep a list (or array) of strings, one for each row.
   - Traverse the input string, placing characters in the appropriate rows, and then join the rows to get the final result.

## Code
- [C++ Solution](./solution_1.cpp)
- [Python Solution](./solution_2.py)


## Complexity Analysis
- **Time Complexity**: O(n), where `n` is the length of the input string `s`. Each character is placed in its respective row, and then the rows are concatenated to form the final string.
- **Space Complexity**: O(n), where `n` is the length of the input string. We use extra space to store characters in multiple rows.
