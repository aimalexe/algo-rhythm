# Problem 345: Reverse Vowels of a String

**Problem Link**: [LeetCode Problem 345](https://leetcode.com/problems/reverse-vowels-of-a-string/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Two Pointers, Recursion, Stack, String Manipulation, Vowels

## Problem Statement

Given a string `s`, reverse only the vowels in the string and return it. The vowels are `'a'`, `'e'`, `'i'`, `'o'`, `'u'`, and they can appear in both lower and upper cases, and more than once.

### Example 1:
```
Input: s = "IceCreAm"
Output: "AceCreIm"

Explanation: The vowels in the string are ['I', 'e', 'e', 'A']. Reversing the vowels gives "AceCreIm".
```

### Example 2:
```
Input: s = "leetcode"
Output: "leotcede"

Explanation: The vowels in the string are ['e', 'e', 'o']. Reversing the vowels gives "leotcede".
```

## Solution Explanation

We provide three different approaches to solve the problem using **C++**, **TypeScript**, and **Python**.

### Approach

1. **C++ (Two-Pointer Approach)**:
   - We use two pointers, one starting from the beginning and another from the end. As we traverse, we swap vowels when both pointers find them. This approach is efficient with constant extra space.
   
2. **TypeScript (Stack-Based Approach)**:
   - We push all the vowels from the string into a stack. Then, we traverse the string again and replace each vowel with the one popped from the stack. This approach uses O(n) space due to the stack.
   
3. **Python (Two-Pointer Approach)**:
   - Similar to the C++ approach, we use two pointers to reverse the vowels in-place. The Python solution is idiomatic, utilizing lists to modify strings since they are immutable in Python.

## Code
- [C++ Solution](./solution_1.cpp)
- [TypeScript Solution](./solution_2.ts)
- [Python Solution](./solution_3.py)

## Complexity Analysis

### C++ Solution (Two-Pointer Approach)
- **Time Complexity**: O(n), where n is the length of the string. Each character is processed once by either pointer.
- **Space Complexity**: O(1), since we are not using any additional data structures aside from the input string.

### TypeScript Solution (Stack-Based Approach)
- **Time Complexity**: O(n), where n is the length of the string. We traverse the string twice: once to collect the vowels and once to place them back.
- **Space Complexity**: O(n), due to the stack that stores all vowels.

### Python Solution (Two-Pointer Approach)
- **Time Complexity**: O(n), where n is the length of the string. Each character is processed at most once.
- **Space Complexity**: O(1), as the list is modified in place and no additional data structures are required beyond the input.
