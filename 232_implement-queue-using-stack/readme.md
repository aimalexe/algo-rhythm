# Problem 232: Implement Queue using Stacks

**Problem Link**: [LeetCode Problem 232](https://leetcode.com/problems/implement-queue-using-stacks/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Stack, Queue, Data Structures

## Problem Statement

The task is to implement a first-in-first-out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue: `push`, `pop`, `peek`, and `empty`. 

You need to implement the `MyQueue` class with the following methods:
- `void push(int x)`: Pushes element x to the back of the queue.
- `int pop()`: Removes the element from the front of the queue and returns it.
- `int peek()`: Returns the element at the front of the queue.
- `boolean empty()`: Returns `true` if the queue is empty, `false` otherwise.

## Solution Explanation

To implement a queue using two stacks, we can leverage the LIFO (Last In, First Out) nature of stacks to simulate FIFO behavior. The idea is to use one stack for enqueueing (adding) elements and another for dequeueing (removing) elements.

### Approach
1. **Push Operation**: Simply push the element onto the `inputStack`.
2. **Pop Operation**: If the `outputStack` is empty, transfer all elements from `inputStack` to `outputStack` to reverse the order. Then pop the top element from `outputStack`.
3. **Peek Operation**: Similar to pop, check if `outputStack` is empty and transfer if necessary. Then return the top element of `outputStack`.
4. **Empty Check**: The queue is empty if both stacks are empty.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)

## Complexity Analysis

- **Time Complexity**: 
  - `push`: O(1) — adding an element to the stack.
  - `pop` and `peek`: O(n) in the worst case when transferring elements between stacks, but amortized O(1) over a sequence of operations.
  
- **Space Complexity**: O(n) — the maximum space used is determined by the number of elements in the queue, which can be stored in either of the two stacks.
