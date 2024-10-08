# Problem 202: Happy Number

**Problem Link**: [LeetCode - Happy Number](https://leetcode.com/problems/happy-number/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Math, HashSet, Floyd’s Cycle Detection, Two Pointers

## Problem Statement

A **happy number** is a number defined by the following process:
1. Starting with any positive integer, replace the number by the sum of the squares of its digits.
2. Repeat the process until the number equals `1` (where it will stay), or it loops endlessly in a cycle which does not include `1`.
3. Numbers for which this process ends in `1` are happy numbers.

### Example:

#### Example 1:
- **Input**: `n = 19`
- **Output**: `true`
- **Explanation**:  
  `1² + 9² = 82`  
  `8² + 2² = 68`  
  `6² + 8² = 100`  
  `1² + 0² + 0² = 1`

#### Example 2:
- **Input**: `n = 2`
- **Output**: `false`

## Solution Explanation

We solve this problem using **Floyd’s Cycle Detection Algorithm** (also known as the "tortoise and hare" approach). This is used to detect cycles in a sequence generated by the sum of squares of digits of the number. If a cycle is detected that does not contain `1`, the number is not happy.

### Approach

1. **Helper Function (`digitSquareSum`)**: This function calculates the sum of the squares of the digits of a number.
   
2. **Floyd's Cycle Detection Algorithm**:
   - **Slow pointer** moves one step at a time by calculating the sum of the squares of digits once.
   - **Fast pointer** moves two steps at a time by calculating the sum of the squares of digits twice.
   - If `slow` and `fast` pointers meet at some number other than 1, it means there is a cycle, and the number is not happy.
   
3. **Termination**:
   - If `slow` equals `1`, the number is happy.
   - If `slow` and `fast` pointers meet at a number other than `1`, the number is not happy.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)
- [Python Solution](./solution_3.py)

## Complexity Analysis

- **Time Complexity**: O(log n)
  - The number of digits in `n` is O(log n), and we process each digit in constant time for the sum of squares. Detecting cycles will take logarithmic time proportional to the number of digits.

- **Space Complexity**: O(1)
  - We use constant extra space, as we only need a few variables to keep track of the sum and the two pointers.
