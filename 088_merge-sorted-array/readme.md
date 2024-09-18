# Problem 88: Merge Sorted Array

**Problem Link**: [LeetCode Problem - Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Two Pointers, Sorting

## Problem Statement

You are given two integer arrays `nums1` and `nums2`, sorted in **non-decreasing order**, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

Merge `nums2` into `nums1` as one sorted array. The final sorted array should not be returned by the function, but instead should be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2` has a length of `n`.

### Example 1:
```
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
```

### Example 2:
```
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
```

### Example 3:
```
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
```

## Solution Explanation

This problem is best solved using a **two-pointer approach** starting from the back of the arrays. Since both arrays are already sorted, we can avoid additional sorting by comparing the largest elements from both `nums1` and `nums2` and placing the larger of the two in the last available position of `nums1`. This approach avoids overwriting elements that still need to be compared.

### Approach
1. **Two-pointer approach from the end**: 
   - Set pointers to the last non-zero elements in `nums1` and `nums2`.
   - Compare elements from the end of both arrays.
   - Place the larger element in the last available position of `nums1`.
   - If there are any remaining elements in `nums2`, copy them into `nums1`.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)

## Complexity Analysis

### C++ Solution:
- **Time Complexity**: O(m + n)
  - We traverse both arrays once, hence the time complexity is proportional to the sum of the lengths of both arrays.
  
- **Space Complexity**: O(1)
  - The merge is performed in-place in `nums1`, so no additional space is required.

### JavaScript Solution:
- **Time Complexity**: O(m + n)
  - We traverse both arrays once during the merging process.

- **Space Complexity**: O(m + n)
  - We create an additional array `mergedArray` to store the merged elements before copying them back into `nums1`, so we require extra space proportional to the size of both arrays.