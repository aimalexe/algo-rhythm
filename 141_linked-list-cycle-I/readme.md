# Problem 141: Linked List Cycle

**Problem Link**: [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Linked List, Two Pointers, Cycle Detection

## Problem Statement

Given `head`, the head of a linked list, determine if the linked list has a cycle in it. A cycle occurs if there is some node in the list that can be revisited by continuously following the `next` pointer. 

The function should return `true` if there is a cycle, and `false` otherwise.

## Solution Explanation

The task is to detect a cycle in a singly linked list. This can be done efficiently using either:
1. **Floyd's Cycle-Finding Algorithm (Tortoise and Hare)**: We use two pointers—one moving twice as fast as the other. If there is a cycle, the fast pointer will eventually catch up to the slow pointer.
2. **Using a Set**: We can store visited nodes in a set and check if we revisit any node, which would indicate a cycle.

### Approach

#### Approach 1: Floyd's Cycle-Finding Algorithm (Two Pointers)
1. Initialize two pointers: `slow` (moves one step) and `fast` (moves two steps).
2. Traverse the list, moving `slow` one step at a time and `fast` two steps at a time.
3. If `slow` and `fast` pointers meet at any point, there is a cycle.
4. If `fast` reaches the end (`nullptr`), no cycle exists.

#### Approach 2: Using a Set (Hashing)
1. Traverse the linked list and store each visited node in a set.
2. If a node is revisited (i.e., already in the set), a cycle exists.
3. If the traversal completes without revisiting any node, there is no cycle.

## Code

- [Solution 1: C++ (Floyd’s Cycle-Finding Algorithm)](./solution_1.cpp)
- [Solution 2: Python (Using Set)](./solution_2.py)

## Complexity Analysis

### Approach 1: Floyd’s Cycle-Finding Algorithm (C++)
- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list. Both the `slow` and `fast` pointers traverse the list at most `n` times.
- **Space Complexity**: O(1), since only two pointers (`slow` and `fast`) are used.

### Approach 2: Using Set (Python)
- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list. We visit each node once.
- **Space Complexity**: O(n), since we store up to `n` nodes in the set.