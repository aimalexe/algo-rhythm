# Problem 205: Isomorphic Strings

**Problem Link**: [LeetCode 205](https://leetcode.com/problems/isomorphic-strings/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Hash Map, String, Two-way Mapping

## Problem Statement

Given two strings `s` and `t`, determine if they are isomorphic.

Two strings `s` and `t` are considered isomorphic if the characters in `s` can be replaced to get `t`. All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

### Example:
1. Input: `s = "egg"`, `t = "add"`
   - Output: `true`
2. Input: `s = "foo"`, `t = "bar"`
   - Output: `false`
3. Input: `s = "paper"`, `t = "title"`
   - Output: `true`

## Solution Explanation

To determine if two strings are isomorphic, we need to ensure that:
1. Every character in string `s` can be mapped to a character in string `t`.
2. No two characters in `s` map to the same character in `t`.
3. The mapping should be consistent throughout the string.

We can use two hash maps to check the mappings from `s` to `t` and `t` to `s` to ensure bidirectional consistency.

### Approach
1. Iterate through both strings and map each character of `s` to the corresponding character in `t`.
2. Maintain two hash maps: one for `s -> t` mapping and another for `t -> s`.
3. If at any point, a character in `s` or `t` maps inconsistently, return `false`.
4. If no inconsistencies are found, return `true`.

## Code
- [Solution 1: C++](./solution_1.cpp)
- [Solution 2: JavaScript](./solution_2.js)


## Complexity Analysis
- **Time Complexity**: O(n), where `n` is the length of the strings. We iterate through both strings once.
- **Space Complexity**: O(n), where `n` is the size of the hash maps storing the character mappings.

- **Time Complexity**: O(n), where `n` is the length of the strings. We loop through each character once.
- **Space Complexity**: O(n), due to the hash maps storing character mappings from `s` to `t` and vice versa.