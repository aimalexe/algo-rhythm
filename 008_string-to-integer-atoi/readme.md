# Problem 8: String to Integer (atoi)

**Problem Link**: [String to Integer (atoi) on LeetCode](https://leetcode.com/problems/string-to-integer-atoi/)

**Difficulty Level**: Medium

**Key Concepts/Tags**: String Manipulation, Edge Cases, Overflow Handling

## Problem Statement

Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer. The function should ignore leading whitespace, determine the sign, convert valid digits into an integer, and handle overflow by clamping the result to fit within the 32-bit signed integer range.

## Solution Explanation

The problem involves several steps:
1. **Ignore Leading Whitespace**: Remove any spaces before encountering digits or signs.
2. **Determine the Sign**: If the first non-whitespace character is `+` or `-`, determine whether the number is positive or negative. If no sign is present, the number is positive by default.
3. **Convert the Number**: Parse digits until a non-digit character is encountered.
4. **Handle Overflow**: If the number exceeds the 32-bit integer range, clamp it to `-2^31` or `2^31 - 1`.

### Approach
1. **Trimming**: First, strip leading spaces.
2. **Sign Check**: If the next character is either `+` or `-`, set the sign accordingly.
3. **Conversion**: Parse valid digits until a non-digit is encountered.
4. **Overflow Check**: During the parsing, check if the number exceeds the 32-bit signed integer range and clamp the result.

## Code
- [C++ Solution](./solution_1.cpp)
- [Python Solution](./solution_2.py)


## Complexity Analysis
- **Time Complexity**: O(n), where `n` is the length of the input string. Each character is processed once.
- **Space Complexity**: O(1), as no additional space beyond variables is used.