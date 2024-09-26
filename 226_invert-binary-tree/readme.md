# Problem 226: Invert Binary Tree

**Problem Link**: [Problem Link](https://leetcode.com/problems/invert-binary-tree/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Depth First Search, Breadth First Search, Binary Tree

## Problem Statement

Given the `root` of a binary tree, invert the tree, and return its root. The goal is to swap the left and right children of each node in the tree.

### Example:

**Example 1**:
- Input: root = [4,2,7,1,3,6,9]
- Output: [4,7,2,9,6,3,1]

**Example 2**:
- Input: root = [2,1,3]
- Output: [2,3,1]

**Example 3**:
- Input: root = []
- Output: []

## Solution Explanation

The task requires us to swap the left and right children of each node in the binary tree. There are different approaches to solving this, including **Recursive DFS (Depth-First Search)** and **Iterative BFS (Breadth-First Search)**. Both approaches are efficient and can solve the problem within the required constraints.

### Approach

1. **C++ Solution (Recursive DFS)**:
   - This solution uses a recursive depth-first search (DFS) approach where we recursively traverse the left and right subtrees and swap them at every node. This method takes advantage of recursion to visit each node and swap its children.

2. **Dart Solution (Iterative BFS)**:
   - This solution uses an iterative breadth-first search (BFS) approach. We traverse the tree level by level, using a queue to keep track of the nodes. For each node, we swap its left and right children and add them to the queue to process their children.

## Code
- [Solution 1: C++ (Recursive DFS)](./solution_1.cpp)
- [Solution 2: Dart (Iterative BFS)](./solution_2.dart)

## Complexity Analysis

### Solution 1: C++ (Recursive DFS)
- **Time Complexity**: O(n), where `n` is the number of nodes in the tree. Each node is visited exactly once.
- **Space Complexity**: O(h), where `h` is the height of the tree. This accounts for the recursion stack.

### Solution 2: Dart (Iterative BFS)
- **Time Complexity**: O(n), where `n` is the number of nodes in the tree. We process each node once.
- **Space Complexity**: O(w), where `w` is the maximum width of the tree (i.e., the number of nodes at the widest level of the tree). The queue will hold the nodes at the current level at most.
