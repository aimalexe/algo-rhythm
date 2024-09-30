Here’s a README for the solutions to LeetCode problem number **231: Power of Two**, encompassing all three approaches provided.

# Problem 231: Power of Two

**Problem Link**: [LeetCode 231: Power of Two](https://leetcode.com/problems/power-of-two/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Math, Bit Manipulation

## Problem Statement

Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`. An integer `n` is a power of two if there exists an integer `x` such that \( n == 2^x \).

## Solution Explanation

To determine if an integer is a power of two, we can use different approaches, each leveraging unique characteristics of numbers and bit manipulation. Below are three methods to solve the problem.

### Approach 1: Iterative Division
1. Check if `n` is less than or equal to 0. If so, return false.
2. Continuously divide `n` by 2 until it becomes odd.
3. If the final value of `n` is 1, return true; otherwise, return false.

### Approach 2: Bit Manipulation
1. Check if `n` is greater than 0 and if `n & (n - 1)` equals 0.
2. This condition will be true only for powers of two, as powers of two have a single bit set in their binary representation.

### Approach 3: Bit Shift
1. Similar to the iterative division approach, check if `n` is positive.
2. Right shift `n` until it becomes 1. If at any point the least significant bit (LSB) is 1 before reaching 1, return false.
3. Return true if `n` is reduced to 1.

## Code
- [C++ Iterative Division Solution](./solution_1.cpp)
- [Python Bit Manipulation Solution](./solution_2.py)
- [C Bit Shift Solution](./solution_3.c)

## Complexity Analysis

- **Time Complexity**:
  - Approach 1: O(log n) for the iterative division, as we divide `n` by 2.
  - Approach 2: O(1) for the bit manipulation check.
  - Approach 3: O(log n) for the bit shifting until `n` becomes 1.

- **Space Complexity**: O(1) for all approaches, as they use a constant amount of space regardless of the input size.