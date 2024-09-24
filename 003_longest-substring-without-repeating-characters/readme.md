# Problem 3: Longest Substring Without Repeating Characters

**Problem Link**: [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

**Difficulty Level**: Medium

**Key Concepts/Tags**: Sliding Window, Hash Map, Two Pointers, String

## Problem Statement

Given a string, find the length of the longest substring without repeating characters. 

### Example:

**Input**: `"abcabcbb"`  
**Output**: `3`  
**Explanation**: The answer is "abc", with the length of 3.

**Input**: `"bbbbb"`  
**Output**: `1`  
**Explanation**: The answer is "b", with the length of 1.

## Solution Explanation

To efficiently solve this problem, we use the **sliding window** technique combined with a **hash map** to track the last index of each character. This allows us to determine when a repeating character occurs and adjust the window accordingly.

### Approach

1. **Sliding Window**: Maintain two pointers (`start`, `end`), where `start` represents the beginning of the current substring and `end` is the current character being processed.
2. **Hash Map**: Use an unordered map to store the last occurrence of each character. If a character is repeated within the current window, adjust the `start` pointer to avoid repeating characters.
3. **Calculate Maximum Length**: For each step, calculate the length of the current window and update the maximum length if necessary.

## Code

- [C++ Solution](./solution_1.cpp)
- [Python Solution](./solution_2.py)

## Complexity Analysis

- **Time Complexity**: O(n)
  - We traverse the string once, updating the start pointer and hash map as necessary. Each character is processed at most twice (once when we add it and once when we update the start).
  
- **Space Complexity**: O(min(n, m))
  - We store the last occurrence of each character in the hash map. The space used is proportional to the smaller of the string length (`n`) or the number of unique characters (`m`). 

