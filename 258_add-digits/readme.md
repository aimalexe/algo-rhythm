# Problem 258: Add Digits

**Problem Link**: [Add Digits](https://leetcode.com/problems/add-digits/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Math, Digit Manipulation

## Problem Statement

Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

## Solution Explanation

To solve this problem, we can utilize two different approaches: a loop-based method and a mathematical approach known as the **digital root**.

1. **Loop-Based Approach**: This method involves using a loop to sum the digits of the number repeatedly until the result is a single digit.

2. **Digital Root Approach**: This method leverages a mathematical formula to compute the digital root directly without using any loops or recursion, significantly improving efficiency.

### Approach
1. **Loop-Based Approach**:
   - Use a loop to continually sum the digits of the input number.
   - Update the number to the sum of its digits until it becomes a single digit.

2. **Digital Root Approach**:
   - Use the formula `1 + (num - 1) % 9` to compute the digital root.
   - Handle the special case where the input number is zero.

## Code
- [Solution 1 - C++](./solution_1.cpp)
- [Solution 2 - Python (Digital Root)](./solution_2.py)


## Complexity Analysis

- **Time Complexity**:
  - **Loop-Based Approach**: O(d), where d is the number of digits in `num`. In the worst case, it may require several iterations to reduce to a single digit.
  - **Digital Root Approach**: O(1), as it uses a simple mathematical calculation.

- **Space Complexity**:
  - **Loop-Based Approach**: O(1), since it uses a constant amount of space.
  - **Digital Root Approach**: O(1), as it only uses a few variables for calculations.
