# Problem 83: Remove Duplicates from Sorted List

**Problem Link**: [LeetCode Problem Link](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Linked List, Two Pointers, Recursion

## Problem Statement

Given the `head` of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

### Example 1:

- **Input**: `head = [1, 1, 2]`
- **Output**: `[1, 2]`

### Example 2:

- **Input**: `head = [1, 1, 2, 3, 3]`
- **Output**: `[1, 2, 3]`

## Constraints:

- The number of nodes in the list is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`
- The list is guaranteed to be sorted in ascending order.

## Solution Explanation

### Approach 1: Iterative (C++ Solution)

In this approach, we iterate through the linked list and remove duplicates by adjusting the `next` pointers of the nodes. This ensures that each unique value appears exactly once.

- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list. We traverse the entire list once.
- **Space Complexity**: O(1), as we do not use any extra data structures beyond pointers for traversal.

**Link to the C++ Iterative Solution**: [Iterative Solution in C++](./solution_1.cpp)

---

### Approach 2: Recursive (Python Solution)

In the recursive approach, we recursively process the list. We return the modified list from each recursive call after removing duplicates.

- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list. Each node is visited exactly once.
- **Space Complexity**: O(n), as the recursion stack consumes space for each call.

**Link to the Python Recursive Solution**: [Recursive Solution in Python](./solution_2.py)

---

### Complexity Analysis Summary

| Approach             | Time Complexity | Space Complexity |
|----------------------|-----------------|------------------|
| Iterative (C++)       | O(n)            | O(1)             |
| Recursive (Python)    | O(n)            | O(n)             |

