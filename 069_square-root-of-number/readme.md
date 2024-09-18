# Problem 69: Sqrt(x)

**Problem Link**: [LeetCode Problem Link](https://leetcode.com/problems/sqrtx/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Search, Math

## Problem Statement

Given a non-negative integer `x`, return the square root of `x` rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

- For example, do not use `pow(x, 0.5)` in C++ or `x ** 0.5` in Python.

### Example 1:
- **Input**: `x = 4`
- **Output**: `2`
- **Explanation**: The square root of 4 is 2, so we return 2.

### Example 2:
- **Input**: `x = 8`
- **Output**: `2`
- **Explanation**: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

## Solution Explanation

The problem requires finding the integer square root of a non-negative integer `x`. There are multiple approaches to solve this problem, with binary search being one of the most efficient.

### Approach 1: Binary Search (C++ Solution)
The binary search technique works by narrowing down the possible values for the square root of `x` between `1` and `x`.

1. **Base Case**: If `x == 0` or `x == 1`, the result is `x` itself.
2. **Binary Search**:
   - Set the range of possible values between `1` and `x`.
   - Calculate the middle value (`mid`) and compare `mid * mid` with `x`.
   - If `mid * mid == x`, return `mid`.
   - If `mid * mid < x`, move to the right half.
   - If `mid * mid > x`, move to the left half.
3. Return the largest possible integer whose square is less than or equal to `x`.

### Approach 2: Linear Search (JavaScript Solution)
This approach involves incrementing a value `i` starting from `1` and continuing until `i * i > x`. The integer square root will be the largest value of `i` such that `i * i <= x`.

## Code
- [C++ Solution (Binary Search)](./solution_1.cpp)
- [JavaScript Solution (Linear Search)](./solution_2.js)


## Complexity Analysis

### C++ Solution (Binary Search):
- **Time Complexity**: O(log x), because binary search is applied, which repeatedly halves the search space.
- **Space Complexity**: O(1), since we only use a few variables to perform the search.

### JavaScript Solution (Linear Search):
- **Time Complexity**: O(sqrt(x)), because we increment a variable from `1` to the square root of `x`.
- **Space Complexity**: O(1), as the space used is constant apart from the input.
