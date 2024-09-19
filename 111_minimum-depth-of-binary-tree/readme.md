# Problem 111: Minimum Depth of Binary Tree

**Problem Link**: [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Binary Tree, Depth-First Search (DFS), Recursion

## Problem Statement

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

**Note**: A leaf is a node with no children.

## Solution Explanation

To determine the minimum depth of a binary tree, we need to find the shortest path from the root to a leaf node. A leaf node is defined as a node with no children. The algorithm can be implemented using a recursive depth-first search (DFS) approach.

### Approach
1. **Recursive DFS**: 
    - For each node, we check if it is a leaf node (i.e., it has no children). If it is, we return a depth of 1.
    - If the current node only has one child, we skip the null child and continue to calculate the depth for the other child.
    - If the current node has two children, we recursively calculate the minimum depth of the left and right subtrees and return the smaller of the two depths plus one.
    
2. **Base Case**: If the node is null, we return a depth of 0 since an empty tree has a depth of zero.

## Code
- [C++ Solution](./solution_1.cpp)
- [C Solution](./solution_2.c)

## Complexity Analysis

- **Time Complexity**: O(n)  
  The time complexity is O(n), where `n` is the number of nodes in the binary tree. This is because each node is visited once during the recursive traversal.

- **Space Complexity**: O(h)  
  The space complexity is O(h), where `h` is the height of the tree. This space is used by the recursive call stack. In the worst case (completely unbalanced tree), the height can be `n`. In the best case (completely balanced tree), the height is log(n).