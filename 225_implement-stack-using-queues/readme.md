# Problem 225: Implement Stack using Queues

**Problem Link**: [Problem Link](https://leetcode.com/problems/implement-stack-using-queues/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Stack, Queue, Design, Data Structure

## Problem Statement

Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (`push`, `pop`, `top`, and `empty`).

Implement the `MyStack` class:
- `void push(int x)` — Pushes element `x` to the top of the stack.
- `int pop()` — Removes the element on the top of the stack and returns it.
- `int top()` — Returns the element on the top of the stack.
- `boolean empty()` — Returns `true` if the stack is empty, `false` otherwise.

### Example:

**Example 1**:
- Input:
  - `["MyStack", "push", "push", "top", "pop", "empty"]`
  - `[[], [1], [2], [], [], []]`
- Output: `[null, null, null, 2, 2, false]`

**Explanation**:
```cpp
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // returns 2
myStack.pop(); // returns 2
myStack.empty(); // returns false
```

## Solution Explanation

We are required to simulate stack operations using only queue operations (`push`, `pop`, `size`, and `isEmpty`). There are two main approaches to solving this problem using either **two queues** or **one queue**.

### Approach

1. **C++ Solution (Two Queues)**:
   - We maintain two queues (`q1` and `q2`). Whenever we push an element, we enqueue it in `q2` and transfer all elements from `q1` to `q2`. Then we swap `q1` and `q2` so that `q1` always contains elements in stack order. The `pop` and `top` operations are straightforward using `q1`.

2. **JavaScript Solution (One Queue)**:
   - Here, we maintain a single queue. When pushing an element, after enqueuing it, we rotate the queue such that the newly added element comes to the front. This ensures that the last element added is always at the front, mimicking the stack's last-in-first-out behavior.

## Code
-  [Solution 1: C++ (Two Queues)](./solution_1.cpp)
- [Solution 2: JavaScript (One Queue)](./solution_2.js)

## Complexity Analysis

### Solution 1: C++ (Two Queues)
- **Time Complexity**:
  - `push`: O(n), where `n` is the number of elements in the stack, as we transfer all elements from `q1` to `q2` on each `push`.
  - `pop`: O(1), as we remove the front element.
  - `top`: O(1), as we access the front element.
  - `empty`: O(1), as we check if `q1` is empty.

- **Space Complexity**: O(n), where `n` is the number of elements in the stack. We need space for two queues.

### Solution 2: JavaScript (One Queue)
- **Time Complexity**:
  - `push`: O(n), because we rotate the queue after pushing the new element to simulate stack behavior.
  - `pop`: O(1), as we remove the front element.
  - `top`: O(1), as we access the front element.
  - `empty`: O(1), as we check if the queue is empty.

- **Space Complexity**: O(n), where `n` is the number of elements in the stack. Only one queue is used.