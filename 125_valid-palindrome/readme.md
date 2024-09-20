# Problem 125: Valid Palindrome

**Problem Link**: [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: String, Two Pointers, Alphanumeric Check, Palindrome

## Problem Statement

A phrase is considered a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

### Example 1:
- **Input**: `"A man, a plan, a canal: Panama"`
- **Output**: `true`
- **Explanation**: After removing non-alphanumeric characters and converting to lowercase, it becomes `"amanaplanacanalpanama"`, which is a palindrome.

### Example 2:
- **Input**: `"race a car"`
- **Output**: `false`
- **Explanation**: After removing non-alphanumeric characters and converting to lowercase, it becomes `"raceacar"`, which is not a palindrome.

### Example 3:
- **Input**: `" "`
- **Output**: `true`
- **Explanation**: After removing non-alphanumeric characters, it becomes an empty string `""`, which is considered a palindrome.

## Solution Explanation

To solve the problem:
1. We need to remove all non-alphanumeric characters from the string and convert it to lowercase.
2. Once cleaned, we need to check if the string reads the same forward and backward.
3. This can be done efficiently using the two-pointer technique, where we compare characters from both ends, moving inward.

### Approach: Two Pointer Method (C and JavaScript)

We use two pointers (`left` and `right`) starting from the beginning and the end of the string. We skip any characters that are not alphanumeric and convert valid characters to lowercase for comparison. If at any point, the characters do not match, we return `false`. If we complete the traversal without mismatches, we return `true`.

## Code
- [C Solution](./solution_1.c)
- [JavaScript Solution](./solution_2.js)


## Complexity Analysis

### Time Complexity:
- **C and JavaScript**: O(n), where `n` is the length of the string. We traverse the string once with two pointers.

### Space Complexity:
- **C and JavaScript**: O(1), as we only use a constant amount of extra space aside from the input string.
