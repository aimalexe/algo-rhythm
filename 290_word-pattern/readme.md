# Problem 290: Word Pattern

**Problem Link**: [LeetCode Problem 290](https://leetcode.com/problems/word-pattern/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Hash Map, String, Bijection

## Problem Statement

Given a `pattern` and a string `s`, find if `s` follows the same pattern. The word pattern is followed if:

- Each letter in `pattern` maps to exactly one unique word in `s`.
- Each unique word in `s` maps to exactly one letter in `pattern`.
- No two letters map to the same word, and no two words map to the same letter.

### Example 1:
- Input: `pattern = "abba"`, `s = "dog cat cat dog"`
- Output: `true`

### Example 2:
- Input: `pattern = "abba"`, `s = "dog cat cat fish"`
- Output: `false`

### Example 3:
- Input: `pattern = "aaaa"`, `s = "dog cat cat dog"`
- Output: `false`

## Solution Explanation

We solve this problem using a hash map (dictionary) to store mappings between each character in the `pattern` and the words in `s`. Additionally, we ensure the mapping is bijective (one-to-one correspondence) by checking if any two characters map to the same word and vice versa.

### Approach 1 (C++ - Using Two Hash Maps):
We use two unordered maps:
1. One map (`charToWord`) to store the mapping from characters in the `pattern` to words in the string `s`.
2. Another map (`wordToChar`) to store the reverse mapping from words to characters.

By using both maps, we ensure the pattern is followed, and no two letters map to the same word or vice versa.

### Approach 2 (JavaScript - Using Map):
In JavaScript, we implement the same logic using a `Map` for the character-to-word mapping and a `Map` for the word-to-character mapping. This ensures both directions of the mapping are validated.

## Code

- [C++ Solution (Two Hash Maps)](./solution_1.cpp)
- [JavaScript Solution (Map)](./solution_2.js)

## Complexity Analysis

### Two Hash Maps:
- **Time Complexity**: O(n), where `n` is the number of words in `s`. We iterate through the pattern and the words once.
- **Space Complexity**: O(n), due to the hash maps storing the mappings between characters and words.