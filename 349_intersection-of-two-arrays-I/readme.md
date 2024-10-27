# Problem 349: Intersection of Two Arrays

**Problem Link**: [LeetCode Problem 349](https://leetcode.com/problems/intersection-of-two-arrays/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, HashSet, Set Intersection

## Problem Statement

Given two integer arrays `nums1` and `nums2`, return an array of their intersection. Each element in the result must be **unique**, and you may return the result in **any order**.

### Example 1:
```
Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
Output: [2]
```

### Example 2:
```
Input: nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
Output: [9, 4]
Explanation: [4, 9] is also accepted.
```

### Constraints:
- `1 <= nums1.length, nums2.length <= 1000`
- `0 <= nums1[i], nums2[i] <= 1000`

## Solution Explanation

We provide two solutions in **C++** and **Dart**, both using a set-based approach to efficiently find the intersection of the two arrays. Sets are ideal for ensuring uniqueness and allow for fast lookups.

### Approach

1. **C++ and Dart (Set-Based Approach)**:
    - Convert one of the arrays to a set for fast lookups and then iterate through the second array, checking if each element exists in the set.
    - Add elements that exist in both arrays to a result set to ensure uniqueness.
    - Convert the result set back to a vector for the final result.


## Code

- [C++ Solution](./solution_1.cpp)
- [Dart Solution](./solution_2.dart)

## Complexity Analysis

### Set-Based Approach (CPP and Dart)
- **Time Complexity**: O(n + m), where `n` is the size of `nums1` and `m` is the size of `nums2`. Inserting elements into the set and checking for intersection are both O(1) operations on average.
- **Space Complexity**: O(n + m), due to the use of additional sets for `nums1` and the result.
