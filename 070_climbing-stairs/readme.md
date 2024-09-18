# Problem 70: Climbing Stairs

**Problem Link**: [LeetCode Problem Link](https://leetcode.com/problems/climbing-stairs/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Dynamic Programming, Memoization, Tabulation, Recursion, Space Optimization

## Problem Statement

You are climbing a staircase. It takes `n` steps to reach the top. Each time, you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

### Example 1:
- **Input**: `n = 2`
- **Output**: `2`
- **Explanation**: There are two ways to climb to the top:
  1. 1 step + 1 step
  2. 2 steps

### Example 2:
- **Input**: `n = 3`
- **Output**: `3`
- **Explanation**: There are three ways to climb to the top:
  1. 1 step + 1 step + 1 step
  2. 1 step + 2 steps
  3. 2 steps + 1 step

## Solution Explanation

The problem is similar to finding the number of ways to reach a target using steps of size 1 or 2. This can be solved using several dynamic programming approaches, including recursion, memoization, and tabulation.

### Approach 1: Recursion with Memoization (C++)

In this approach, we use a recursive function to calculate the number of ways to climb the stairs. The result of each subproblem is stored in a memoization array to avoid redundant calculations.

- **Time Complexity**: O(n)
- **Space Complexity**: O(n) (due to the recursion stack and memoization array)

**Link to the C++ Solution**: [Recursion with Memoization in C++](./solution_1.cpp)

---
### Approach 2: Memoization (JavaScript)

This approach is similar to the C++ recursive solution, but implemented in JavaScript using a memoization technique to store the results of previously computed subproblems.

- **Time Complexity**: O(n)
- **Space Complexity**: O(n) (due to the memoization array)

**Link to the JavaScript Solution**: [Memoization in JavaScript](./solution_2.js)

---

### Approach 3: Space-Optimized Solution (Dart)

In this approach, we optimize the space complexity by using only two variables to keep track of the number of ways to climb the last two steps. This reduces the space complexity to O(1).

- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

**Link to the Dart Solution**: [Space Optimization in Dart](./solution_3.dart)

---

### Approach 4: Tabulation (Python)

This approach uses dynamic programming with a bottom-up tabulation method. We iteratively fill an array that keeps track of the number of ways to reach each step.

- **Time Complexity**: O(n)
- **Space Complexity**: O(n) (due to the `dp` array)

**Link to the Python Solution**: [Tabulation in Python](./solution_4.py)

---


### Complexity Analysis Summary

| Approach             | Time Complexity | Space Complexity |
|----------------------|-----------------|------------------|
| Recursion + Memoization (C++) | O(n)           | O(n)             |
| Tabulation (Python)   | O(n)           | O(n)             |
| Memoization (JavaScript) | O(n)           | O(n)             |
| Space Optimization (Dart) | O(n)           | O(1)             |
