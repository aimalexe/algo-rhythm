# Problem 303: Range Sum Query - Immutable

**Problem Link**: [LeetCode Problem 303](https://leetcode.com/problems/range-sum-query-immutable/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Prefix Sum, Array, Range Query

## Problem Statement

Given an integer array `nums`, handle multiple queries of the following type:

1. Calculate the sum of the elements of `nums` between indices `left` and `right` inclusive, where `left <= right`.

Implement the `NumArray` class:

- `NumArray(int[] nums)` Initializes the object with the integer array `nums`.
- `int sumRange(int left, int right)` Returns the sum of the elements of `nums` between indices `left` and `right` inclusive.

### Example:
```text
Input:
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]

Output:
[null, 1, -1, -3]

Explanation:
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return 1
numArray.sumRange(2, 5); // return -1
numArray.sumRange(0, 5); // return -3
```

## Solution Explanation

The problem can be solved efficiently using a **prefix sum** approach. The idea is to preprocess the array by calculating cumulative sums of the elements. This allows us to compute the sum of any subarray in constant time.

### Prefix Sum Approach:
- Precompute a prefix sum array, where `prefixSum[i]` contains the sum of elements from the start of the array up to index `i-1`.
- To calculate the sum between indices `left` and `right`, use the formula:
  $$
  \text{sumRange}(left, right) = \text{prefixSum}[right+1] - \text{prefixSum}[left]
  $$
  
This allows for efficient querying in O(1) time after an O(n) preprocessing step.

## Code

- [C++ Solution (Prefix Sum)](./solution_1.cpp)
- [C Solution (Prefix Sum)](./solution_2.c)
- [JavaScript Solution (Prefix Sum)](./solution_3.js)

## Complexity Analysis

### Time Complexity:
- **Preprocessing**: O(n), where `n` is the size of the input array `nums`. This is due to the construction of the prefix sum array.
- **Query (`sumRange`)**: O(1) per query, since we only access two elements of the prefix sum array and perform a subtraction.

### Space Complexity:
- **Space Complexity**: O(n), due to the additional space used by the prefix sum array.

## Summary of Approaches:
All three solutions (C++, C, and JavaScript) use the **prefix sum** technique to efficiently handle range sum queries. This method allows preprocessing in O(n) time, followed by constant-time queries for each range sum.