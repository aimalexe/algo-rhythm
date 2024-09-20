# Problem 142: Linked List Cycle II

**Problem Link**: [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)

**Difficulty Level**: Medium

**Key Concepts/Tags**: Linked List, Two Pointers, Cycle Detection, Floyd’s Tortoise and Hare Algorithm

## Problem Statement

Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return `null`.

A cycle exists in a linked list if some node can be visited again by following the `next` pointer repeatedly. The function should return the node where the cycle starts. If there is no cycle, return `null`.

## Solution Explanation

The problem is an extension of detecting a cycle in a linked list, but now we need to find the starting point of the cycle. Floyd’s Cycle-Finding Algorithm, also known as the Tortoise and Hare algorithm, provides an efficient way to solve this in linear time with constant space.

### Approach
1. **Detect if there is a cycle**: Use two pointers—`slow` and `fast`. Move `slow` by one step and `fast` by two steps. If there is a cycle, the pointers will eventually meet.
2. **Find the start of the cycle**: After detecting a cycle, reset one of the pointers (`slow`) to the head of the list. Move both `slow` and `fast` one step at a time. The point where they meet again is the starting node of the cycle.
3. If no cycle is detected, return `null`.

## Code
- [Solution 1: C++ (Floyd’s Cycle-Finding Algorithm)](./solution_1.cpp)
- [Solution 2: JavaScript (Floyd’s Cycle-Finding Algorithm)](./solution_2.js)


## Complexity Analysis

### Solution 1: C++ (Floyd’s Cycle-Finding Algorithm)
- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list. Both pointers traverse the list at most `n` times.
- **Space Complexity**: O(1), since no extra data structures are used, only two pointers (`slow` and `fast`).

### Solution 2: JavaScript (Floyd’s Cycle-Finding Algorithm)
- **Time Complexity**: O(n), where `n` is the number of nodes in the linked list.
- **Space Complexity**: O(1), as only two pointers (`slow` and `fast`) are used. 

