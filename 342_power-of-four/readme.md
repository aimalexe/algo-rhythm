# Problem 342: Power of Four

**Problem Link**: [Power of Four Problem](https://leetcode.com/problems/power-of-four/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Bit Manipulation, Logarithms, Iteration

## Problem Statement

Given an integer `n`, return `true` if `n` is a power of four. Otherwise, return `false`.

An integer `n` is a power of four if there exists an integer `x` such that:

```
n == 4^x
```

### Example 1:
- Input: `n = 16`
- Output: `true`

### Example 2:
- Input: `n = 5`
- Output: `false`

### Example 3:
- Input: `n = 1`
- Output: `true`

## Solution Explanation

We solve this problem with three distinct approaches in C++, TypeScript, and Python.

### Approach

1. **C++ (Bit Manipulation)**:
   - We first check if the number is a power of two using bitwise operations (only one bit should be set). Additionally, for powers of four, that bit should only appear in an even position. We use a mask to ensure the bit is in an even position.

2. **TypeScript (Logarithmic Approach)**:
   - The logarithmic property of powers is used. We compute `log4(n)` using the change of base formula (`log(n) / log(4)`), and check if the result is an integer. If it is, then `n` is a power of four.

3. **Python (Iteration Approach)**:
   - This approach uses an iterative method. While `n` is divisible by 4, we repeatedly divide it by 4. If we end up with `n == 1`, then `n` is a power of four.

## Code

- [Solution 1: C++ Bit Manipulation Approach](./solution_1.cpp)
- [Solution 2: TypeScript Logarithmic Approach](./solution_2.ts)
- [Solution 3: Python Iteration Approach](./solution_3.py)

## Complexity Analysis

### Solution 1: C++ (Bit Manipulation)

- **Time Complexity**: O(1) – Bitwise operations are constant time.
- **Space Complexity**: O(1) – No additional space is required beyond the input.

### Solution 2: TypeScript (Logarithmic Approach)

- **Time Complexity**: O(1) – The logarithmic calculations take constant time.
- **Space Complexity**: O(1) – No additional space is used apart from the input.

### Solution 3: Python (Iteration Approach)

- **Time Complexity**: O(log₄(n)) – In each iteration, we divide `n` by 4, leading to logarithmic time complexity with base 4.
- **Space Complexity**: O(1) – No extra space is used beyond the input.

