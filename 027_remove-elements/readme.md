# Problem 27: Remove Element

**Problem Link**: [Remove element](https://leetcode.com/problems/remove-element/description/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Two-Pointer Technique, In-Place Modification

## Problem Statement

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` in-place. The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

To clarify:
- Change the array such that the first `k` elements contain the elements which are not equal to `val`.
- The remaining elements of `nums` beyond the first `k` elements do not matter.
- Return `k`, which represents the number of elements in the array that are not equal to `val`.

## Solution Explanation

The most efficient way to solve this problem is by using a two-pointer technique. This approach allows you to modify the array in place, with minimal additional space usage and in a single pass.

### Approach
1. **Two-Pointer Technique**:
    - Initialize two pointers: one (`i`) to iterate through the array and another (`k`) to track the position where the next non-`val` element should be placed.
    - Traverse the array. For each element, check if it is not equal to `val`. If it is not, assign it to the `k` position and increment `k`.
    - After the loop, `k` will be the count of elements in the array that are not equal to `val`, and the first `k` elements will be the desired result.

## Code
- [JavaScript - Two-Pointer Technique](./solution_1.js)
- [C++ - Two-Pointer Technique](./solution_2.cpp)

## Complexity Analysis
- **Time Complexity**: O(n), where `n` is the number of elements in the array. We traverse the array only once.
- **Space Complexity**: O(1), as we modify the array in place without using additional space.