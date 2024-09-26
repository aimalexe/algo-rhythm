# Problem 10: Regular Expression Matching

**Problem Link**: [Regular Expression Matching on LeetCode](https://leetcode.com/problems/regular-expression-matching/)

**Difficulty Level**: Hard

**Key Concepts/Tags**: Dynamic Programming, Recursion, String Matching

## Problem Statement

Given an input string `s` and a pattern `p`, implement regular expression matching with support for the following special characters:

- `.`: Matches any single character.
- `*`: Matches zero or more of the preceding element.

The matching should cover the **entire** input string (not partial).

## Solution Explanation

We provide two different approaches for solving this problem:

### Approach 1: Dynamic Programming (C++)
1. **2D DP Table**:
   - We maintain a 2D boolean DP table where `dp[i][j]` represents if the first `i` characters of string `s` match the first `j` characters of pattern `p`.
   
2. **Handling Characters**:
   - If `p[j-1]` matches `s[i-1]` or `p[j-1]` is `.` (wildcard), we can propagate the previous result `dp[i-1][j-1]`.

3. **Handling `*`**:
   - If `p[j-1] == '*'`, we have two cases:
     - Match zero occurrences of the character before `*` (use `dp[i][j-2]`).
     - If the character before `*` matches the current character of `s`, we can use `dp[i-1][j]`.

### Approach 2: Recursive Backtracking (JavaScript)
1. **Recursive Function**:
   - We define a recursive function to check if the current characters of `s` and `p` match, and then continue matching the rest of the strings.

2. **Handling `.` and Exact Characters**:
   - If `p[0]` is a `.` or exactly matches `s[0]`, we proceed with the next character by recursively checking `s[1:]` and `p[1:]`.

3. **Handling `*`**:
   - If `p[1]` is `*`, we check two cases:
     - Match zero occurrences of the preceding element.
     - Match one or more occurrences of the preceding element, and continue checking for more matches in `s`.

## Code
- [C++ Dynamic Programming Solution](./solution_1.cpp)
- [JavaScript Recursive Solution](./solution_2.js)

## Complexity Analysis

### C++ Dynamic Programming
- **Time Complexity**: O(m * n), where `m` is the length of string `s` and `n` is the length of pattern `p`. We fill an `m x n` DP table.
- **Space Complexity**: O(m * n), for the DP table.

### JavaScript Recursive Backtracking
- **Time Complexity**: O(2^(m+n)), due to the exponential number of recursive calls in the worst case.
- **Space Complexity**: O(m + n), for the recursion stack.