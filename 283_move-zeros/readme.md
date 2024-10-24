# Problem 283: Move Zeroes

**Problem Link**: [LeetCode Problem 283](https://leetcode.com/problems/move-zeroes/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Two Pointers, In-Place Operation

## Problem Statement

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements. The operation must be performed in-place without making a copy of the array.

### Example 1:
- Input: `nums = [0, 1, 0, 3, 12]`
- Output: `[1, 3, 12, 0, 0]`

### Example 2:
- Input: `nums = [0]`
- Output: `[0]`

## Solution Explanation

We solve this problem using the two-pointer technique. The idea is to move all the non-zero elements to the front of the array, while shifting zeros towards the end. This approach avoids using extra space and maintains the order of non-zero elements.

### Approach:
- Use two pointers:
  - One pointer (`current`) traverses the array.
  - Another pointer (`lastNonZeroFoundAt`) keeps track of the position where the next non-zero element should go.
- If the `current` pointer finds a non-zero element, it is swapped with the element at the `lastNonZeroFoundAt` index.
- Continue this until the array is fully traversed.

## Code

- [C++ Solution (Two Pointers)](./solution_1.cpp)
- [Dart Solution (Two Pointers)](./solution_2.dart)

## Complexity Analysis

### Two Pointers:
- **Time Complexity**: O(n), where `n` is the size of the array, as we are traversing the array once.
- **Space Complexity**: O(1), since the array is modified in place without using extra space.
