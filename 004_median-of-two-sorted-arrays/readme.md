# Problem 4: Median of Two Sorted Arrays

**Problem Link**: [Median of Two Sorted Arrays on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/)

**Difficulty Level**: Hard

**Key Concepts/Tags**: Binary Search, Divide and Conquer, Arrays

## Problem Statement

You are given two sorted arrays, `nums1` and `nums2`, of size `m` and `n` respectively. The task is to return the median of the two sorted arrays. The combined overall run time complexity should be O(log(m+n)).

## Solution Explanation

The problem requires finding the median of two sorted arrays in O(log(m+n)) time complexity, meaning a binary search approach is ideal. We need to partition the arrays in such a way that both left and right partitions of the combined arrays satisfy the properties of a median.

### Approach
1. **Binary Search**: Perform binary search on the smaller array to minimize search space. Partition both arrays such that all elements on the left of the partition are smaller than those on the right.
2. **Handle Edge Cases**: Consider edge cases like empty arrays, different lengths, and arrays containing duplicate elements.
3. **Median Calculation**: If the combined length of the two arrays is even, the median is the average of the two middle elements; if odd, the median is the middle element.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)


## Complexity Analysis
- **Time Complexity**: O(log(min(m, n))), where `m` and `n` are the lengths of the two input arrays. We are using binary search on the smaller array.
- **Space Complexity**: O(1), as we use only a constant amount of extra space.

