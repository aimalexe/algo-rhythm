# Problem 234: Palindrome Linked List

**Problem Link**: [Link here](https://leetcode.com/problems/palindrome-linked-list/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Linked List, Two Pointers, Stack

## Problem Statement

Given the head of a singly linked list, return `true` if it is a palindrome or `false` otherwise. A palindrome is a sequence that reads the same backward as forward.

## Solution Explanation

To determine if the linked list is a palindrome, we can utilize two different approaches: 

1. **Using Fast and Slow Pointers**: This method involves finding the middle of the linked list using two pointers (one moving twice as fast as the other). After identifying the middle, we can reverse the second half of the linked list and compare it with the first half.

2. **Using a Stack**: In this approach, we can traverse the first half of the linked list, pushing the values onto a stack. Then, we can traverse the second half, popping values from the stack to compare with the current node values.

### Approach
1. **Fast and Slow Pointers**: 
   - Use two pointers to find the middle of the linked list.
   - Reverse the second half of the list.
   - Compare the reversed second half with the first half.

2. **Stack**:
   - Traverse the linked list and push the first half's values onto a stack.
   - Traverse the second half of the list and compare with the values popped from the stack.

## Code
- [Solution 1 - C++](./solution_1.cpp)
- [Solution 2 - JavaScript](./solution_2.js)

## Complexity Analysis

- **Time Complexity**: 
  - Both approaches run in O(n), where n is the number of nodes in the linked list. The linked list is traversed a maximum of twice.

- **Space Complexity**: 
  - The Fast and Slow Pointers approach runs in O(1) space since it uses a constant amount of extra space.
  - The Stack approach runs in O(n) space due to the stack storing half of the linked list values.