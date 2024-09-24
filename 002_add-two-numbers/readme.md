# Problem 2: Add Two Numbers

**Problem Link**: [Add Two Numbers](https://leetcode.com/problems/add-two-numbers)

**Difficulty Level**: Medium

**Key Concepts/Tags**: Linked List, Mathematics

## Problem Statement

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

### Example:

**Input**: (2 -> 4 -> 3) + (5 -> 6 -> 4)  
**Output**: 7 -> 0 -> 8

Explanation: 342 + 465 = 807.

## Solution Explanation

To solve this problem, we traverse both linked lists from the least significant digit (head) to the most significant digit (tail), adding corresponding digits along with any carry from the previous addition. If the sum of two digits exceeds 9, we carry over the tens place to the next addition.

### Approach

1. Initialize a dummy node to help build the result linked list.
2. Use a pointer to traverse both linked lists and sum their corresponding values. Maintain a `carry` value for sums greater than or equal to 10.
3. At each step, create a new node for the result linked list and move forward.
4. After processing both linked lists, if there is any carry left, add a final node with the carry value.
5. Return the result linked list starting from the next node after the dummy node.

## Code

- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)

## Complexity Analysis

### C++ and JavaScript:

- **Time Complexity**: O(max(n, m)), where `n` and `m` are the lengths of the two linked lists. We iterate through both lists once.
- **Space Complexity**: O(max(n, m)), because we create a new linked list to store the result.
