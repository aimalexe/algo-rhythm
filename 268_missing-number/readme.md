# Problem 268: Missing Number

**Problem Link**: [LeetCode Problem 268](https://leetcode.com/problems/missing-number/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Bit Manipulation, Math, XOR

## Problem Statement

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

### Example 1:
- Input: `nums = [3, 0, 1]`
- Output: `2`
  
### Example 2:
- Input: `nums = [0, 1]`
- Output: `2`

### Example 3:
- Input: `nums = [9,6,4,2,3,5,7,0,1]`
- Output: `8`

## Solution Explanation

The problem is essentially about finding a missing number from a sequence. Given the nature of the problem, different approaches can be applied to solve this efficiently. 

### Approach 1 (C++ - Mathematical Sum):
The sum of the first `n` natural numbers can be calculated as `n * (n + 1) / 2`. By calculating the actual sum of the numbers in the array and subtracting it from the expected sum, the difference will give the missing number.

### Approach 2 (JavaScript - XOR):
Another efficient approach is using bitwise XOR. By XORing all the numbers from `0` to `n` and XORing all the numbers in the array, the result will be the missing number, as all numbers except the missing one will cancel out.

## Code

- [C++ Solution (Mathematical Sum)](./solution_1.cpp)
- [JavaScript Solution (XOR)](./solution_2.js)

## Complexity Analysis

### C++ Solution (Mathematical Sum):
- **Time Complexity**: O(n), since we iterate through the array once to calculate the sum.
- **Space Complexity**: O(1), as we only use a few variables.

### JavaScript Solution (XOR):
- **Time Complexity**: O(n), since we loop through the array once.
- **Space Complexity**: O(1), as we only use a few variables.