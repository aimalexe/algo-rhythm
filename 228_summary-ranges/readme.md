# Problem 228 and Summary Ranges

**Problem Link**: [LeetCode 228: Summary Ranges](https://leetcode.com/problems/summary-ranges/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, String Manipulation

## Problem Statement

You are given a sorted unique integer array `nums`. A range `[a, b]` is the set of all integers from `a` to `b` (inclusive). The task is to return the smallest sorted list of ranges that cover all the numbers in the array exactly. Each element of `nums` must be covered by exactly one of the ranges, and there should be no integer `x` such that `x` is in one of the ranges but not in `nums`. Each range should be represented in a specific format: `"a->b"` if `a != b` or just `"a"` if `a == b`.

## Solution Explanation

To solve this problem, we need to iterate through the sorted array of integers and identify ranges of continuous numbers. The strategy involves keeping track of the start of a range and checking if the current number continues the sequence. If it does not, we record the range in the specified format and reset the start for the next potential range.

### Approach
1. Initialize a list to store the resulting ranges.
2. Iterate through the input array, keeping track of the start of each range.
3. When a break in continuity is detected, construct the range string and add it to the result.
4. After the loop, return the constructed list of ranges.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)


## Complexity Analysis

- **Time Complexity**: O(n), where n is the number of elements in the input array `nums`. We iterate through the array once.
- **Space Complexity**: O(k), where k is the number of ranges generated. This space is used to store the resulting range strings.