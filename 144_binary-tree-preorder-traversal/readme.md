# Problem 144: Binary Tree Preorder Traversal

**Problem Link**: [LeetCode Problem 144](https://leetcode.com/problems/binary-tree-preorder-traversal/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Binary Tree, Preorder Traversal, Recursion, Iteration

## Problem Statement

Given the root of a binary tree, return the preorder traversal of its nodes' values.

In a preorder traversal, we visit nodes in the following order:
1. Visit the root node.
2. Traverse the left subtree.
3. Traverse the right subtree.

### Example:
#### Example 1:
**Input**: 
```
root = [1,null,2,3]
```
**Output**: 
```
[1,2,3]
```
#### Example 2:
**Input**: 
```
root = [1,2,3,4,5,null,8,null,null,6,7,null,null,null,9]
```
**Output**: 
```
[1,2,4,5,6,7,3,8,9]
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

The problem requires us to return the preorder traversal of a binary tree. We can solve this problem using two different approaches: **recursion** and **iteration**.

### Approach 1 (Recursive):
In a recursive approach, we define a helper function that visits the root node and then recursively traverses the left and right subtrees. This is the simplest approach for a binary tree traversal problem and leverages the call stack to maintain the traversal order.

### Approach 2 (Iterative):
In the iterative approach, we use a stack to simulate the recursive behavior. We start by pushing the root node onto the stack, then while the stack is not empty, we pop a node, add its value to the result list, and push its right and left children (if they exist) to the stack. This ensures that the left subtree is processed before the right subtree, maintaining the preorder traversal order.

## Code

- [Approach 1: Recursive Solution in C++](./solution_1.cpp)
- [Approach 2: Iterative Solution in Python](./solution_2.py)

## Complexity Analysis

### Recursive Approach (C++):
- **Time Complexity**: O(n), where `n` is the number of nodes in the binary tree. Each node is visited exactly once.
- **Space Complexity**: O(n) in the worst case for the recursion stack due to the depth of the tree.

### Iterative Approach (Python):
- **Time Complexity**: O(n), where `n` is the number of nodes in the binary tree. We process each node exactly once.
- **Space Complexity**: O(n) for the stack in the worst case, where the tree could be skewed and the stack contains all nodes.

