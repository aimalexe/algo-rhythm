# Problem 242: Valid Anagram

**Problem Link**: [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: String, Hash Table, Counting

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise. An anagram is a rearrangement of the letters of one string to form the other string.

## Solution Explanation

To determine if two strings are anagrams, we can employ two different approaches:

1. **Character Counting Using an Array**: Count the frequency of each character in both strings using a fixed-size array (since we are limited to lowercase English letters). If the frequency counts match, the strings are anagrams.

2. **Using Collections Counter**: This approach utilizes the `Counter` class from Python's `collections` module to count the frequency of characters in both strings and directly compares these counts.

### Approach
1. **Character Counting Using an Array**:
   - Check if the lengths of the strings are equal; if not, return false.
   - Create a frequency array of size 26 for the lowercase letters.
   - Count the characters in the first string and decrement the counts using the second string.
   - If all counts are zero, the strings are anagrams.

2. **Using Collections Counter**:
   - Check if the lengths of the strings are equal; if not, return false.
   - Use `Counter` to count characters in both strings and compare the resulting counts.

## Code
- [Solution 1 - C++](./solution_1.cpp)
- [Solution 2 - Python](./solution_2.py)


## Complexity Analysis

- **Time Complexity**:
  - Both approaches run in O(n), where n is the length of the strings, as we need to iterate through both strings to count the characters.

- **Space Complexity**:
  - The character counting approach uses O(1) space since the size of the frequency array is constant (26).
  - The Counter approach uses O(n) space to store the counts of characters.