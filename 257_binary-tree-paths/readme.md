# Problem 257: Binary Tree Paths

**Problem Link**: [Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Depth-First Search (DFS), Iteration

## Problem Statement

Given the `root` of a binary tree, return all root-to-leaf paths in any order. A leaf is a node with no children.

## Solution Explanation

To solve this problem, we can use two different approaches: a recursive depth-first search (DFS) and an iterative DFS using a stack.

1. **Recursive Depth-First Search (DFS)**: This method traverses the tree recursively and builds the path as it goes down the tree. When a leaf node is reached, the current path is added to the list of paths.

2. **Iterative DFS Using a Stack**: This approach utilizes a stack to simulate the DFS traversal. Each node and its corresponding path are stored in the stack, and paths are collected when leaf nodes are encountered.

### Approach
1. **Recursive DFS**:
   - Traverse the binary tree recursively.
   - Construct the path for each node, adding it to the paths array when a leaf node is reached.

2. **Iterative DFS Using a Stack**:
   - Use a stack to hold nodes and their corresponding paths.
   - Loop until the stack is empty, popping nodes and updating paths.
   - When a leaf node is reached, add the path to the list of paths.

## Code
- [Solution 1 - Recursive CPP](./solution_1.cpp)
- [Solution 2 - Iterative JavaScript](./solution_2.js)


## Complexity Analysis

- **Time Complexity**:
  - Both approaches run in O(n), where n is the number of nodes in the binary tree, as each node is visited once.

- **Space Complexity**:
  - The recursive DFS approach uses O(h) space, where h is the height of the tree due to the call stack.
  - The iterative DFS approach also uses O(h) space for the stack in the worst case, which can also be equivalent to the height of the tree.
