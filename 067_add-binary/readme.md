# Problem 67: Add Binary

**Problem Link**: [LeetCode Problem Link](https://leetcode.com/problems/add-binary/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: String Manipulation, Bit Manipulation, Binary Addition

## Problem Statement

You are given two binary strings `a` and `b`. Return their sum as a binary string.

### Example 1:
- **Input**: `a = "11"`, `b = "1"`
- **Output**: `"100"`
- **Explanation**: The binary number `11` plus `1` equals `100`.

### Example 2:
- **Input**: `a = "1010"`, `b = "1011"`
- **Output**: `"10101"`
- **Explanation**: The binary number `1010` plus `1011` equals `10101`.

## Solution Explanation

The problem involves adding two binary numbers represented as strings. We can either simulate the addition process manually by iterating from the least significant bit to the most significant bit, or use bitwise manipulation techniques to handle the binary operations.

### Approach

1. **Bitwise Manipulation (C++ approach)**:
   - Convert the binary strings into integers, add them together, and then convert the result back into a binary string using bitwise operations.

2. **Manual Carry-based Addition (Python approach)**:
   - Start from the last character of each string and simulate the addition process by considering each bit and the carry, similar to how you would add two numbers by hand.

## Code
- [C++ Solution (Bitwise Manipulation)](./solution_1.cpp)
- [Python Solution (Carry-based Addition)](./solution_2.py)

## Complexity Analysis

### C++ Solution:
- **Time Complexity**: O(n), where `n` is the maximum length of the two binary strings. The loop runs once to convert the strings into integers, and then again to convert the sum back into a binary string.
- **Space Complexity**: O(1), except for the space used to store the result string.

### Python Solution:
- **Time Complexity**: O(n), where `n` is the maximum length of the two binary strings. The algorithm processes each bit one-by-one.
- **Space Complexity**: O(n), since we store the result in a list and then join it into a string. 