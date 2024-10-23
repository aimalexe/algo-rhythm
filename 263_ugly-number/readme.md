# Problem 263: Ugly Number

**Problem Link**: [Ugly Number](https://leetcode.com/problems/ugly-number/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Math, Number Theory

## Problem Statement

An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5. Given an integer `n`, return `true` if `n` is an ugly number.

## Solution Explanation

To solve this problem, we can utilize two different approaches: an iterative division method in C++ and a prime factorization method in JavaScript.

### Approaches
1. **Iterative Division (C++)**:
   - This method involves repeatedly dividing the number by 2, 3, and 5 until it can no longer be divided.
   - If the final result is 1, the number is considered an ugly number.

2. **Prime Factorization (JavaScript)**:
   - This approach checks for divisibility by the prime factors (2, 3, and 5) using a loop.
   - If any factors other than 2, 3, or 5 remain, the number is not ugly.

## Code
- [Solution 1 - C++ (Iterative Division)](./solution_1.cpp)
- [Solution 2 - JavaScript (Prime Factorization)](./solution_2.js)


## Complexity Analysis

- **Time Complexity**:
  - **C++ Iterative Division**: O(log n), as the number is repeatedly divided by its prime factors.
  - **JavaScript Prime Factorization**: O(log n) for the same reason; it reduces the number based on its factors.

- **Space Complexity**:
  - Both approaches use O(1) space, as they do not require any additional data structures that grow with input size.