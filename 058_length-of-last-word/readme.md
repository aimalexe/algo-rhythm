# Problem 58: Length of Last Word

**Problem Link**: [LeetCode Problem Link](https://leetcode.com/problems/length-of-last-word/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: String Manipulation

## Problem Statement

Given a string `s` consisting of words and spaces, return the length of the last word in the string. A word is defined as a maximal substring consisting of non-space characters only.

### Example 1:
- **Input**: `"Hello World"`
- **Output**: `5`
- **Explanation**: The last word is `"World"`, and its length is `5`.

### Example 2:
- **Input**: `"   fly me   to   the moon  "`
- **Output**: `4`
- **Explanation**: The last word is `"moon"`, and its length is `4`.

### Example 3:
- **Input**: `"luffy is still joyboy"`
- **Output**: `6`
- **Explanation**: The last word is `"joyboy"`, and its length is `6`.

## Solution Explanation

The problem can be solved by efficiently traversing the string, skipping any trailing spaces, and counting the number of characters in the last word. This is done by splitting the string by spaces and returning the length of the last word.

### Approach

1. **String Manipulation**:
   - Strip any trailing spaces.
   - Split the string into words based on spaces.
   - Return the length of the last word from the list of words.

## Code
- [Solution 1](./solution_1.cpp)
- [Solution 2](./solution_2.py)

## Complexity Analysis

- **Time Complexity**: 
   - C++: O(n), where `n` is the length of the string.
   - Python: O(n), where `n` is the length of the string. The split and strip operations take linear time.
  
- **Space Complexity**: 
   - C++: O(1), as only constant extra space is used.
   - Python: O(n), since the `split()` method creates a list of words which may take additional space.