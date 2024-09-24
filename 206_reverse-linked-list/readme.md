### Problem 206: Reverse Linked List

**Problem Link**: [LeetCode 206](https://leetcode.com/problems/reverse-linked-list/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Linked List, Iteration, Recursion

---

## Problem Statement

You are given the head of a singly linked list. You need to reverse the list and return the reversed list.

### Example:
1. Input: `head = [1, 2, 3, 4, 5]`
   - Output: `[5, 4, 3, 2, 1]`
2. Input: `head = [1, 2]`
   - Output: `[2, 1]`
3. Input: `head = []`
   - Output: `[]`

## Solution Explanation

There are two primary ways to reverse a singly linked list:
1. **Iterative Approach**: Traverse the list while adjusting the `next` pointers.
2. **Recursive Approach**: Recursively reverse the sublist, and then adjust pointers during the unwinding of recursion.

### Iterative Approach
- We maintain three pointers:
  - `prev`: Points to the previous node (initially `nullptr`).
  - `curr`: Points to the current node.
  - `next`: Temporarily stores the next node to avoid losing the reference.
- In each iteration, we reverse the `next` pointer and move all pointers forward until `curr` becomes `nullptr`.

### Recursive Approach
- We reverse the rest of the list recursively.
- Once we reach the base case (end of the list), we fix the links by pointing the next node's `next` back to the current node.
  
---

## Code
- [Solution 1: C++ (Iterative Approach)](./solution_1.cpp)
- [Solution 2: Python (Recursive Approach)](./solution_2.py)

---

## Complexity Analysis

### Iterative Approach (C++)
- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list. We traverse each node once.
- **Space Complexity**: O(1), as we only use a few pointers.

### Recursive Approach (Python)
- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list. We recursively process each node.
- **Space Complexity**: O(n), due to the recursion stack. Each function call adds to the stack.