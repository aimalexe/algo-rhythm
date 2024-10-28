# Problem 387: First Unique Character in a String

**Problem Link**: [LeetCode 387: First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Hash Table, String, Frequency Count, Array

## Problem Statement

Given a string `s`, find the first non-repeating character and return its index. If it does not exist, return `-1`.

### Example 1:
```
Input: s = "leetcode"
Output: 0
Explanation: The character 'l' at index 0 is the first character that does not occur at any other index.
```

### Example 2:
```
Input: s = "loveleetcode"
Output: 2
```

### Example 3:
```
Input: s = "aabb"
Output: -1
```

**Constraints**:
- 1 <= s.length <= 10⁵
- `s` consists of only lowercase English letters.

## Solution Explanation

The goal is to find the first character in the string that appears exactly once. To solve this efficiently, we can count the frequency of each character and then find the first character that has a frequency of 1.

### Approaches
#### 1. **C++ Approach 2: Using Array**
Since there are only 26 lowercase letters, we can use an array of size 26 to store character frequencies instead of a hash map for better performance and reduced overhead.

#### 2. **Python Approach 1: Using `collections.Counter`**
We use the `Counter` class from the `collections` module to count character frequencies in one pass. Then, we iterate over the string to find the first non-repeating character.

#### 3. **JavaScript Approach 1: Using `indexOf` and `lastIndexOf`**
We check if the first and last index of each character match using `indexOf()` and `lastIndexOf()`. If they match, the character appears only once.


## Code
- [C++ Solution](./solution_1.cpp)
- [Python Solution](./solution_2.py)
- [Javascript Solution](./solution_3.js)

## Complexity Analysis
### C++ Approach: Array
- **Time Complexity**: O(n), similar to the hash map approach, but using an array for faster access.
- **Space Complexity**: O(1), as we are using a fixed-size array of 26 characters.

### Python Approach: `collections.Counter`
- **Time Complexity**: O(n) due to two passes over the string.
- **Space Complexity**: O(1), since the Counter only holds 26 possible lowercase characters.

### JavaScript Approach: `indexOf` and `lastIndexOf`
- **Time Complexity**: O(n²), since both `indexOf` and `lastIndexOf` are O(n) operations, leading to O(n²) complexity.
- **Space Complexity**: O(1), as no additional data structures are used.
