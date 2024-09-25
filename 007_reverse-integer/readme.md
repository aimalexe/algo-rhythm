# Problem 7: Reverse Integer

**Problem Link**: [Reverse Integer on LeetCode](https://leetcode.com/problems/reverse-integer/)

**Difficulty Level**: Medium

**Key Concepts/Tags**: Math, Overflow Handling, Integer Reversal

## Problem Statement

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, then return `0`. Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

## Solution Explanation

The problem involves reversing the digits of a given 32-bit signed integer while carefully handling overflow cases. The key challenge is to avoid reversing integers that exceed the valid range for 32-bit signed integers.

### Approach
1. **Extract Last Digit**: Extract the last digit using the modulo operator (`% 10`).
2. **Check Overflow**: Before adding the last digit to the reversed result, check whether multiplying the current reversed result by 10 would cause an overflow.
3. **Rebuild the Integer**: Multiply the reversed result by 10 and add the extracted digit.
4. **Handle Negative Numbers**: The same logic applies for negative numbers.
5. **Return 0 if Overflow**: If an overflow is detected during the calculation, return `0`.

## Code

- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)

## Complexity Analysis
- **Time Complexity**: O(log₁₀(x)) – The number of digits in `x` determines the number of iterations, which is proportional to log base 10 of `x`.
- **Space Complexity**: O(1) – Only a few integer variables are used.
