# Problem 203: Remove Linked List Elements

**Problem Link**: [LeetCode - Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Linked List, Recursion, Pointer Manipulation

## Problem Statement

You are given the head of a linked list and an integer `val`. Your task is to remove all the nodes in the linked list that have `Node.val == val` and return the new head of the list.

### Example 1:

- **Input**: `head = [1,2,6,3,4,5,6], val = 6`
- **Output**: `[1,2,3,4,5]`

### Example 2:

- **Input**: `head = [], val = 1`
- **Output**: `[]`

### Example 3:

- **Input**: `head = [7,7,7,7], val = 7`
- **Output**: `[]`

### Constraints:

- The number of nodes in the list is in the range `[0, 10^4]`.
- `1 <= Node.val <= 50`
- `0 <= val <= 50`

## Solution Explanation

We solve this problem using pointer manipulation to traverse and modify the linked list. The basic approach is to use a dummy node to handle edge cases where the head node might need to be removed.

### Approach

1. **Dummy Node**:
   - Create a dummy node that points to the head of the list. This ensures that the head of the list can also be easily removed if it holds the value `val`.
   
2. **Traversal and Removal**:
   - Traverse the list using a pointer, checking if the next node’s value matches the target `val`.
   - If a node matches, adjust the pointer to skip this node and move to the next.
   - If it doesn't match, move the pointer forward.
   
3. **Return the Updated Head**:
   - Return the new head of the list, which is `dummy->next`.

## Code
- [C++ Solution](./remove_linked_list_elements.cpp)
- [Dart Solution](./remove_linked_list_elements.dart)

## Complexity Analysis

- **Time Complexity**: O(n), where n is the number of nodes in the linked list. Each node is visited exactly once.
- **Space Complexity**: O(1), as no extra space is required aside from a few pointers.
