# Problem 278: First Bad Version

**Problem Link**: [LeetCode Problem 278](https://leetcode.com/problems/first-bad-version/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Search, Array

## Problem Statement

You are a product manager and are leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Given an API `bool isBadVersion(version)` which returns whether `version` is bad, implement a function to find the first bad version. Minimize the number of API calls.

### Example 1:
- Input: `n = 5, bad = 4`
- Output: `4`

Explanation:
- Call `isBadVersion(3)` -> false
- Call `isBadVersion(5)` -> true
- Call `isBadVersion(4)` -> true
- Hence, 4 is the first bad version.

### Example 2:
- Input: `n = 1, bad = 1`
- Output: `1`

## Solution Explanation

The problem asks to find the first bad version, and since the versions after a bad one are all bad, a binary search approach is optimal to minimize the number of API calls.

### Approach - Binary Search:
We employ binary search to find the first bad version. We start by initializing two pointers, `left` and `right`, which represent the range of versions. At each step, we check the middle version. If the middle version is bad, the first bad version is either the middle version or one that comes before it, so we narrow down the range to the left side. If the middle version is good, we search in the right side. This continues until `left` equals `right`, which is the first bad version.

## Code

- [C++ Solution (Binary Search)](./solution_1.cpp)
- [Python Solution (Binary Search)](./solution_2.py)

## Complexity Analysis

### Binary Search:
- **Time Complexity**: O(log n) as we divide the range in half with each step using binary search.
- **Space Complexity**: O(1) since we only use a few variables to keep track of the search range.