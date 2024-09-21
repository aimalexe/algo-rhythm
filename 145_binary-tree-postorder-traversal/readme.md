# Problem 145: Binary Tree Postorder Traversal

**Problem Link**: [LeetCode Problem 145](https://leetcode.com/problems/binary-tree-postorder-traversal/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Binary Tree, Postorder Traversal, Recursion, Iteration, Stack

## Problem Statement

Given the root of a binary tree, return the postorder traversal of its nodes' values.

In postorder traversal, the nodes are visited in the following order:
1. Traverse the left subtree.
2. Traverse the right subtree.
3. Visit the root node.

### Example:
#### Example 1:
**Input**: 
```
root = [1, null, 2, 3]
```
**Output**: 
```
[3, 2, 1]
```
#### Example 2:
**Input**: 
```
root = [1, 2, 3, 4, 5, null, 8, null, null, 6, 7, null, null, null, 9]
```
**Output**: 
```
[4, 6, 7, 5, 2, 9, 8, 3, 1]
```

#### Example 3:
**Input**: 
```
root = []
```
**Output**: 
```
[]
```

## Solution Explanation

This problem can be solved using two main approaches: **recursion** and **iteration**. Each approach has its pros and cons depending on the problem constraints and stack depth.

### Approach 1 (Recursive in C++):
This approach follows the natural recursive behavior of the binary tree traversal. We recursively call the left subtree, then the right subtree, and finally process the root node. The recursion stack helps maintain the postorder structure.

### Approach 2 (Iterative in JavaScript):
In this approach, we simulate recursion using a stack. We push the root node to the stack and then process the nodes in reverse postorder (right, left, root). At the end, we reverse the result to achieve the correct postorder sequence. This method avoids the risk of a stack overflow due to deep recursion.

## Code

- [Approach 1: Recursive Solution in C++](./solution_1.cpp)
- [Approach 2: Iterative Solution in JavaScript](./solution_2.js)

## Complexity Analysis

### Recursive Approach (C++)
- **Time Complexity**: O(n), where `n` is the number of nodes in the tree. Each node is visited once during the traversal.
- **Space Complexity**: O(n) in the worst case, due to the recursion stack. This happens when the tree is skewed, and the maximum depth of recursion is `n`.

### Iterative Approach (JavaScript)
- **Time Complexity**: O(n), where `n` is the number of nodes in the tree. Each node is processed exactly once.
- **Space Complexity**: O(n), where `n` is the maximum number of nodes in the stack. In the worst case (skewed tree), all nodes are pushed onto the stack. 

Both solutions handle the problem efficiently by minimizing redundant operations and ensuring that the traversal order is maintained correctly.