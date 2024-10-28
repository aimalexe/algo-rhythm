# Problem 383: Ransom Note

**Problem Link**: [LeetCode 383: Ransom Note](https://leetcode.com/problems/ransom-note/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Hash Table, String, Counting

## Problem Statement

Given two strings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed by using the letters from `magazine` and `false` otherwise. Each letter in `magazine` can only be used once in `ransomNote`.

### Example 1:
```
Input: ransomNote = "a", magazine = "b"
Output: false
```

### Example 2:
```
Input: ransomNote = "aa", magazine = "ab"
Output: false
```

### Example 3:
```
Input: ransomNote = "aa", magazine = "aab"
Output: true
```

## Solution Explanation

We need to determine if the characters in the string `ransomNote` can be formed using the characters in the string `magazine`. The goal is to ensure that every character in the `ransomNote` appears in the `magazine` at least as many times as required.

### Approach 1: Hash Map (C++)
This approach uses a hash map to count the occurrences of each character in `magazine`. Then, for each character in `ransomNote`, we check if it exists in the hash map with a sufficient count. If any character is missing or has insufficient count, we return `false`.

### Approach 2: Array-based Count (JavaScript)
In this approach, we use an array to store the counts of each letter from the `magazine`. We leverage the fact that the problem only involves lowercase English letters, so an array of size 26 is sufficient. Each letter's frequency is checked similarly to the hash map approach, but we use array indices corresponding to the letters.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)

## Complexity Analysis

### Approach 1: C++ Solution (Hash Map)
- **Time Complexity**: O(n + m) where `n` is the length of the ransom note and `m` is the length of the magazine. We process both strings once.
- **Space Complexity**: O(k), where `k` is the number of unique characters in `magazine` (at most 26 for lowercase letters).

### Approach 2: JavaScript Solution (Array-based Count)
- **Time Complexity**: O(n + m) where `n` is the length of the ransom note and `m` is the length of the magazine. We process both strings once.
- **Space Complexity**: O(1) as we only use a fixed-size array of length 26 regardless of the input size.