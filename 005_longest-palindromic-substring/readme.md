# Problem 5: Longest Palindromic Substring

**Problem Link**: [Longest Palindromic Substring on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/)

**Difficulty Level**: Medium

**Key Concepts/Tags**: String Manipulation, Dynamic Programming, Manacher's Algorithm

## Problem Statement

Given a string `s`, return the longest palindromic substring in `s`. A palindrome is a string that reads the same forwards and backwards. The solution should find the longest substring that satisfies this condition.

## Solution Explanation

The problem requires finding the longest palindromic substring in the input string. We provide three different approaches for solving this problem:

1. **Expand Around Center Approach** (O(n^2) Time Complexity)
2. **Manacher’s Algorithm** (O(n) Time Complexity)

### Approach 1: Expand Around Center (Two-Pointer Approach)

1. **Expand Around Center**: 
   - Treat each character (and pairs of consecutive characters) as the potential center of a palindrome.
   - Expand outwards from each center, comparing characters at both ends until they no longer match.
   
2. **Track the Longest Palindrome**: 
   - Keep track of the longest palindrome found during the expansion and return it once the process is complete.

3. **Consider Both Odd and Even-Length Palindromes**: 
   - For odd-length palindromes, use a single character as the center.
   - For even-length palindromes, use pairs of consecutive characters as the center.

### Approach 2: Manacher’s Algorithm

1. **Preprocessing**:
   - To handle both even-length and odd-length palindromes uniformly, the string is preprocessed by inserting a special character (like `#`) between every character and at both ends. This ensures that every palindrome in the new string has an odd length.

2. **Radius Calculation**:
   - For each character in the preprocessed string, calculate the radius (half-length) of the palindrome centered at that character.
   
3. **Center Expansion and Optimization**:
   - Use previously computed information to potentially skip redundant expansions by taking advantage of symmetry within the string. Update the center and right boundary as needed.

4. **Final Palindrome Extraction**:
   - Once the longest palindrome is found, extract the corresponding substring from the original input string.

## Code
- [C++ Solution (Expand Around Center)](./solution_1.cpp)
- [Dart Solution (Expand Around Center)](./solution_2.dart)
- [JavaScript Solution (Manacher's Algorithm)](./solution_3.js)

## Complexity Analysis

### Expand Around Center (C++ and Dart)
- **Time Complexity**: O(n^2), where `n` is the length of the input string. We expand around each center, resulting in a quadratic time complexity.
- **Space Complexity**: O(1), as we only use a few variables to track the start and end of the palindrome.

### Manacher’s Algorithm (JavaScript)
- **Time Complexity**: O(n), where `n` is the length of the input string. Manacher’s algorithm processes the string in linear time.
- **Space Complexity**: O(n), due to the preprocessing of the string and the additional space used for the `p` array.
