# Problem 326: Power of Three

**Problem Link**: [Power of Three Problem](https://leetcode.com/problems/power-of-three/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Math, Logarithms, Iteration

## Problem Statement

Given an integer `n`, determine whether it is a power of three. 

An integer `n` is a power of three if there exists an integer `x` such that:
```
n == 3^x
```

### Example 1:
- Input: `n = 27`
- Output: `true`

### Example 2:
- Input: `n = 0`
- Output: `false`

### Example 3:
- Input: `n = -1`
- Output: `false`

## Solution Explanation

We solve the problem by implementing three different approaches in C++, JavaScript, and Python, each taking advantage of different language features and strategies.

### Approach

1. **C++ (Iterative Division)**: 
   - Iteratively divide the number `n` by 3 until it is no longer divisible by 3. If the result is 1, then `n` is a power of three.
  
2. **JavaScript (Logarithmic)**: 
   - Use the logarithmic properties to check if the logarithm of `n` to the base 3 is an integer. This approach leverages mathematical calculations to determine if `n` is a power of three.
   
3. **Python (Largest Power of Three)**: 
   - Use the fact that the largest power of 3 that fits in a signed 32-bit integer is `3^19 = 1162261467`. Any number that is a power of three must divide `1162261467` evenly.

## Code

- [Solution 1: C++ Iterative Approach](./solution_1.cpp)
- [Solution 2: JavaScript Logarithmic Approach](./solution_2.js)
- [Solution 3: Python Largest Power of Three Approach](./solution_3.py)

## Complexity Analysis

### Solution 1: C++ (Iterative Division)
- **Time Complexity**: O(log₃(n)) – In the worst case, the number is divided by 3 until it reaches 1, leading to logarithmic time complexity.
- **Space Complexity**: O(1) – The algorithm uses constant space for storing the input and intermediate results.

### Solution 2: JavaScript (Logarithmic Approach)
- **Time Complexity**: O(1) – Calculating logarithms and checking whether the result is an integer is done in constant time.
- **Space Complexity**: O(1) – No additional space is used apart from storing the input.

### Solution 3: Python (Largest Power of Three)
- **Time Complexity**: O(1) – Checking if `n` divides `3^19` evenly is done in constant time.
- **Space Complexity**: O(1) – Only the input and a constant value (`1162261467`) are stored.
