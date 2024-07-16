# Problem 14: Longest Common Prefix

**Problem Link**: [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: String, Vertical Scanning

## Problem Statement

The problem requires finding the longest common prefix string amongst an array of strings. If there is no common prefix, the function should return an empty string. A prefix is considered the initial segment of characters that are shared across all strings in the array.

## Solution Explanation

The solution involves a vertical scanning approach where each character position is compared across all strings simultaneously. The process stops when a character mismatch is found or the end of the shortest string is reached. This approach is efficient for cases where strings have varied lengths and the common prefix ends early in one or more strings.

### Approach
1. **Initial Checks**: Return an empty string if the input array is empty.
2. **Determine Shortest String**: Calculate the length of the shortest string to limit unnecessary character comparisons.
3. **Character-by-Character Comparison**: Iterate through each character position up to the length of the shortest string, comparing the same position in all strings.
4. **Break on Mismatch**: Stop the comparison and break out of the loop if a mismatch is found at any character position.
5. **Construct Result**: If characters match across all strings for a position, append it to the result string. Return the result once a mismatch is found or characters of the shortest string are exhausted.

## Code

- [Solution 1](./solution_1.js)
- [Solution 2](./solution_2.cpp)

## Complexity Analysis
- **Time Complexity**: O(N * M), where N is the number of strings and M is the length of the shortest string. In the worst case, every character of every string is checked.
- **Space Complexity**: O(1). The extra space used by the program is minimal since only a few variables are maintained regardless of the input size.
