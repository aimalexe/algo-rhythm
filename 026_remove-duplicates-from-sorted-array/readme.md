# Problem 26: Remove Duplicates from Sorted Array

**Problem Link**: [Remove duplicates from sorted array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Two-Pointer Technique, Set

## Problem Statement

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in `nums`.

To clarify:
- Change the array such that the first `k` elements contain the unique elements in the order they were present in `nums` initially. 
- The remaining elements of `nums` beyond the first `k` elements do not matter.
- Return `k`, which represents the number of unique elements.

## Solution Explanation

To solve the problem efficiently, we can use a two-pointer technique to traverse the sorted array and keep track of unique elements. Alternatively, a set can be used to ensure uniqueness, though it requires additional space.

### Approach 1: Two-Pointer Technique (JavaScript)
1. Initialize a pointer `uniqueCount` to track the position of the last unique element.
2. Iterate through the array with a second pointer `i` starting from the second element.
3. For each element, compare it with the previous one. If it’s different, it's unique, so increment `uniqueCount` and update the array at `uniqueCount`.
4. Return `uniqueCount` as the count of unique elements.

### Approach 2: Using Set (C++)
1. Convert the array to a set to automatically remove duplicates.
2. Convert the set back into the array by copying its elements back to the original `nums` array.
3. Return the size of the set as the number of unique elements.

## Code
- [JavaScript - Two-Pointer Technique](./solution_1.js)
- [C++ - Using Set](./solution_2.cpp)

## Complexity Analysis

### JavaScript - Two-Pointer Technique
- **Time Complexity**: O(n) where `n` is the number of elements in the array. We traverse the array only once.
- **Space Complexity**: O(1) since the operations are performed in place without requiring additional space.

### C++ - Using Set
- **Time Complexity**: O(n log n) because of the insertion operations in the set.
- **Space Complexity**: O(n) due to the use of the set for storing unique elements.
