# Problem 222: Count Complete Tree Nodes

**Problem Link**: [Problem Link](https://leetcode.com/problems/count-complete-tree-nodes/)

**Difficulty Level**: Medium

**Key Concepts/Tags**: Binary Tree, Depth First Search (DFS), Binary Search, Complete Tree

## Problem Statement

Given the `root` of a **complete** binary tree, return the number of the nodes in the tree.

In a **complete binary tree**, every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. The tree can have between 1 and `2^h` nodes inclusive at the last level, where `h` is the height of the tree.

**Design an algorithm that runs in less than O(n) time complexity.**

### Example:

**Example 1**:
- Input: root = [1,2,3,4,5,6]
- Output: 6

**Example 2**:
- Input: root = []
- Output: 0

**Example 3**:
- Input: root = [1]
- Output: 1

## Solution Explanation

For this problem, the optimal approach requires taking advantage of the properties of a **complete** binary tree. Since complete trees have a specific structure, we can use methods like binary search and depth comparison to reduce time complexity. We provide two different solutions, one for **C++** and one for **Python**, each with a unique approach.

### Approach

1. **C++ (Binary Search + Depth Calculation)**:
   - This approach calculates the left-most and right-most depth of the tree. If the two depths are equal, it means the tree is a full binary tree at that level, and the number of nodes can be computed directly as `2^depth - 1`. Otherwise, we recursively count the nodes in the left and right subtrees.

2. **Python (DFS Traversal)**:
   - This solution uses a depth-first search (DFS) approach to recursively count the nodes in both the left and right subtrees of the tree. This solution works for any binary tree but doesn't specifically optimize for complete trees.

## Code
- [Solution 1: C++](./solution_1.cpp)
- [Solution 2: Python (DFS Traversal)](./solution_2.py)

## Complexity Analysis

### Solution 1: C++ (Binary Search + Depth Calculation)
- **Time Complexity**: O(log(n)^2), where `n` is the number of nodes in the tree. The binary search reduces the number of nodes to explore at each level.
- **Space Complexity**: O(log(n)), due to recursion depth.

### Solution 2: Python (DFS Traversal)
- **Time Complexity**: O(n), where `n` is the number of nodes in the tree. We traverse each node exactly once.
- **Space Complexity**: O(log(n)) in a balanced tree for recursion stack, and O(n) in the worst case of a skewed tree.
