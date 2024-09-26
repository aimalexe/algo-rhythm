# Problem 217: Contains Duplicate

**Problem Link**: [LeetCode Problem 217](https://leetcode.com/problems/contains-duplicate/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Hash Set, Sorting

## Problem Statement

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

## Solution Explanation

We will explore two efficient approaches to solve this problem: using a hash set and sorting.

### Approach 1: Using Hash Set

1. **Key Idea**: Utilize a hash set to keep track of seen elements. If an element is encountered that is already in the set, a duplicate is found.
2. **Complexity**:
   - **Time Complexity**: O(n), where `n` is the number of elements in the array. The set operations (`insert` and `find`) are average O(1).
   - **Space Complexity**: O(n), for storing elements in the set.

### Approach 2: Sorting

1. **Key Idea**: Sort the array first and then check for consecutive duplicates. If any two consecutive elements are the same, a duplicate is found.
2. **Complexity**:
   - **Time Complexity**: O(n log n), due to the sorting step.
   - **Space Complexity**: O(1) if sorting in-place, otherwise O(n) if additional space is used.

## Code
- [Approach 1: Using Hash Set](./solution_1.cpp)
- [Approach 2: Sorting](./solution_2.ts)

## Complexity Analysis

#### C++ Hash Set
- **Time Complexity**: O(n), where `n` is the number of elements in the array. The set operations (`insert` and `has`) are average O(1).
- **Space Complexity**: O(n), for storing elements in the set.

#### TypeScript Sorting
- **Time Complexity**: O(n log n), due to the sorting step.
- **Space Complexity**: O(1) if sorting in-place, otherwise O(n) if additional space is used.
