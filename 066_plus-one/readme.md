# Problem 66: Plus One

**Problem Link**: [LeetCode Problem Link](https://leetcode.com/problems/plus-one/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Math

## Problem Statement

You are given a large integer represented as an integer array `digits`, where each element represents a digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading zeros.

The task is to increment the large integer by one and return the resulting array of digits.

### Example 1:
- **Input**: `digits = [1, 2, 3]`
- **Output**: `[1, 2, 4]`
- **Explanation**: The array represents the integer `123`. Incrementing by one gives `123 + 1 = 124`. Thus, the result should be `[1, 2, 4]`.

### Example 2:
- **Input**: `digits = [4, 3, 2, 1]`
- **Output**: `[4, 3, 2, 2]`
- **Explanation**: The array represents the integer `4321`. Incrementing by one gives `4321 + 1 = 4322`. Thus, the result should be `[4, 3, 2, 2]`.

### Example 3:
- **Input**: `digits = [9]`
- **Output**: `[1, 0]`
- **Explanation**: The array represents the integer `9`. Incrementing by one gives `9 + 1 = 10`. Thus, the result should be `[1, 0]`.

## Solution Explanation

The approach is to increment the large integer by traversing the array of digits from right to left (starting with the least significant digit). If a digit is less than 9, it is incremented directly. If the digit is 9, it is set to 0, and we continue to the next digit. If all digits are 9, we add a new `1` at the beginning of the array, resulting in a carry-over situation (e.g., `[9, 9]` becomes `[1, 0, 0]`).

### Approach

1. Traverse the array from right to left:
   - If the current digit is less than 9, increment it and return the result.
   - If the current digit is 9, set it to 0 and continue the traversal.
2. If all digits were 9, insert `1` at the beginning of the array.

## Code

- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)

## Complexity Analysis

- **Time Complexity**: O(n), where `n` is the number of digits in the array. We may need to iterate through all digits in the worst case (e.g., when all digits are `9`).
  
- **Space Complexity**: 
   - C++: O(1), since we modify the input array in place.
   - JavaScript: O(1), except for the space required to store the digits and any space used for operations like `unshift()`.