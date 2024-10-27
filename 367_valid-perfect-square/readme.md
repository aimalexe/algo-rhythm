# Problem 367: Valid Perfect Square

**Problem Link**: [LeetCode Problem 367](https://leetcode.com/problems/valid-perfect-square/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Search, Newton’s Method, Math

## Problem Statement

Given a positive integer `num`, return `true` if `num` is a perfect square or `false` otherwise.

A **perfect square** is an integer that is the square of an integer. In other words, it is the product of some integer with itself. You must not use any built-in library function, such as `sqrt`.

### Example 1:
```
Input: num = 16
Output: true
Explanation: 4 * 4 = 16 and 4 is an integer.
```

### Example 2:
```
Input: num = 14
Output: false
Explanation: 3.742 * 3.742 = 14 and 3.742 is not an integer.
```

### Constraints:
- `1 <= num <= 2^31 - 1`

---

## Solution Explanation

We provide two different solutions in **C++** and **Python** to check if a number is a perfect square. Both solutions are efficient and avoid using the built-in square root functions as required by the problem constraints.

### Approach

1. **C++ (Binary Search Approach)**:
   - We use binary search to find an integer `x` such that `x * x == num`. The search space is between `1` and `num`. If we find such an integer, the number is a perfect square; otherwise, it is not.

2. **Python (Newton's Method)**:
   - Newton’s method is an iterative approach that starts with an initial guess and refines it using the formula `x = (x + num // x) // 2` until the square of the approximation equals `num`. This is a very efficient method for approximating square roots.

## Code

- [C++ Solution](./solution_1.cpp)
- [Python Solution](./solution_2.py)

## Complexity Analysis

### C++ Solution (Binary Search Approach)
- **Time Complexity**: O(log n), where `n` is the value of `num`. Binary search reduces the search space logarithmically.
- **Space Complexity**: O(1), as we only use a few variables.

### Python Solution (Newton's Method)
- **Time Complexity**: O(log n), where `n` is the value of `num`. Newton's method converges very quickly and reduces the value by half with each iteration.
- **Space Complexity**: O(1), as only a few variables are used to store intermediate values.