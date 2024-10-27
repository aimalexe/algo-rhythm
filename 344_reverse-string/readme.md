# Problem 344: Reverse String

**Problem Link**: [LeetCode Problem 344](https://leetcode.com/problems/reverse-string/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Two Pointers, Recursion, In-Place Modification

## Problem Statement

Write a function that reverses a string. The input string is given as an array of characters `s`. You must do this by modifying the input array in-place with O(1) extra memory.

### Example 1:
```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
```

### Example 2:
```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```

## Solution Explanation

We implemented two different solutions, one in **C++** using the two-pointer approach, and one in **JavaScript** using recursion. Both solutions are efficient in terms of time and space.

### Approach

1. **C++ Solution (Two-Pointer Approach)**:
    - Place one pointer at the start and the other at the end.
    - Swap the elements at both pointers and move them toward the center until the pointers meet.
    - This method is efficient and works in-place, requiring O(1) additional space.

2. **JavaScript Solution (Recursive Approach)**:
    - Recursively swap the elements from the start and end of the array.
    - Base case: stop when the pointers meet or cross.
    - This approach also modifies the array in place, although it uses additional space on the call stack for recursion.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)


## Complexity Analysis

### C++ Solution (Two-Pointer Approach)
- **Time Complexity**: O(n), where n is the length of the string. Each element is visited once during the swap operation.
- **Space Complexity**: O(1), since the solution works in-place without additional space.

### JavaScript Solution (Recursive Approach)
- **Time Complexity**: O(n), where n is the length of the string. Each recursive call swaps two characters.
- **Space Complexity**: O(n), due to the call stack used in the recursion.
