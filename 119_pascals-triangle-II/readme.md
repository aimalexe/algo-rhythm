# Problem 119: Pascal's Triangle II

**Problem Link**: [Pascal's Triangle II on Leetcode](https://leetcode.com/problems/pascals-triangle-ii/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Mathematical Calculation, Binomial Coefficients

## Problem Statement

Given an integer `rowIndex`, return the `rowIndex`th (0-indexed) row of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it. The triangle always starts with `1` at the top, and every row begins and ends with `1`. We are tasked with generating the `rowIndex`th row, with an additional challenge to optimize for space complexity.

## Solution Explanation

We need to generate only the specific row of Pascal's triangle efficiently. There are two common approaches:

1. **Dynamic Update Approach**:
   This approach builds Pascal’s triangle up to the required row using an iterative method. We update the row in-place, leveraging the relationship between the numbers in Pascal's triangle, where each number is the sum of the two numbers directly above it.
   
2. **Single Loop Binomial Coefficient Approach**:
   We can calculate the values in Pascal's triangle using binomial coefficients. This method directly computes the values using the combination formula in a single loop, reusing previous computations to optimize performance. The key formula is:
   $
   C(r, k) = \frac{C(r, k-1) \cdot (r - (k - 1))}{k}
   $
   This allows us to compute each element from the previous one without having to recompute combinations from scratch.

### Approach 1: Dynamic Update Approach

In this approach, we initialize a list of `rowIndex + 1` length with `1`s and iteratively update the values of the row by traversing backwards from the current index to prevent overwriting necessary values.

### Approach 2: Single Loop Binomial Coefficient Approach

This approach uses the mathematical combination formula to compute each value of the row directly. We initialize a list of `rowIndex + 1` length with `1`s and update the middle elements by calculating them using the binomial coefficient formula.

## Code

- [C++: Dynamic Update Approach](./solution_1.cpp)
- [JS: Dynamic Update Approach](./solution_2.js)
- [TypeScript: Single Loop Binomial Coefficient Approach](./solution_3.ts)


## Complexity Analysis

### Approach 1: Dynamic Update Approach
- **Time Complexity**: O(rowIndex²) because for each row, we iterate backward to update its values.
- **Space Complexity**: O(rowIndex) because we only store one row at a time.

### Approach 2: Single Loop Binomial Coefficient Approach
- **Time Complexity**: O(rowIndex) since we calculate each element of the row directly using the combination formula.
- **Space Complexity**: O(rowIndex) because we only store the `rowIndex`th row.
