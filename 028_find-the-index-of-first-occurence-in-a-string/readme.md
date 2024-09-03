# Problem 28: Find the Index of the First Occurrence in a String

**Problem Link**: [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: String, Substring Search

## Problem Statement

Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.

**Examples:**
1. Input: `haystack = "sadbutsad"`, `needle = "sad"`
   - Output: `0`
   - Explanation: "sad" occurs at index 0 and 6. The first occurrence is at index 0, so we return 0.
   
2. Input: `haystack = "leetcode"`, `needle = "leeto"`
   - Output: `-1`
   - Explanation: "leeto" did not occur in "leetcode", so we return -1.

**Constraints**:
- `1 <= haystack.length, needle.length <= 10^4`
- `haystack` and `needle` consist of only lowercase English characters.

## Solution Explanation

The goal is to locate the first occurrence of the substring `needle` within the string `haystack`. If `needle` is found, the function should return its starting index; if not, the function should return `-1`.

### Approach
1. **Check for Empty `needle` or `haystack`**:
   - If `needle` is an empty string, return `-1` immediately.
   
2. **Substring Search**:
   - Iterate through `haystack` using a loop. For each index `i`, extract a substring of length equal to `needle` and compare it with `needle`.
   - If a match is found, return the current index `i`.
   - If no match is found by the end of the loop, return `-1`.

This approach is a straightforward brute-force method to solve the problem and works efficiently within the problem constraints.

## Code
- [solution 1](./solution_1.cpp)
- [solution 2](./solution_2.js)

## Complexity Analysis

- **Time Complexity**: O((n - m + 1) * m), where `n` is the length of `haystack` and `m` is the length of `needle`. This represents the worst-case scenario where every position in `haystack` is checked for a possible match with `needle`.
  
- **Space Complexity**: O(1). The solution does not require any additional space aside from a few variables, making it very space-efficient.