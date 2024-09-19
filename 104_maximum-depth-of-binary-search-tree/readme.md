# Problem 104: Maximum Depth of Binary Tree

**Problem Link**: [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Depth-First Search (DFS), Breadth-First Search (BFS), Binary Tree

## Problem Statement

Given the root of a binary tree, return its maximum depth. A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

### Example 1:
- **Input**: `root = [3,9,20,null,null,15,7]`
- **Output**: `3`

### Example 2:
- **Input**: `root = [1,null,2]`
- **Output**: `2`

### Constraints:
- The number of nodes in the tree is in the range [0, 10⁴].
- `-100 <= Node.val <= 100`

## Solution Explanation

To compute the maximum depth of a binary tree, we can use two approaches:

1. **Recursive (Depth-First Search)**: 
   - Recursively compute the depth of the left and right subtrees. The maximum depth is the larger of the two depths plus one for the current node.
   
2. **Iterative (Breadth-First Search)**: 
   - Use a queue to perform a level-order traversal (BFS). For each level traversed, increment the depth count.

### Approach

1. **Recursive (DFS) Approach**:
   - Define a recursive function to compute the depth of each subtree.
   - If the node is `nullptr`, return 0 (base case).
   - For each node, return the maximum depth between its left and right subtrees plus one.

2. **Iterative (BFS) Approach**:
   - Initialize a queue and start with the root node.
   - Traverse each level of the tree, counting the number of levels (depth) until the queue is empty.

## Code
- [C++ Recursive Solution](./solution_1.cpp)
- [JavaScript Iterative Solution](./solution_2.js)

## Complexity Analysis

### C++ Recursive Solution:
- **Time Complexity**: O(n), where `n` is the number of nodes. We visit each node once.
- **Space Complexity**: O(h), where `h` is the height of the tree. The space complexity comes from the recursive call stack, which can go as deep as the height of the tree (worst case O(n)).

### JavaScript Iterative Solution:
- **Time Complexity**: O(n), where `n` is the number of nodes in the tree.
- **Space Complexity**: O(n), as the queue stores nodes level by level, with the maximum space usage being at the widest level of the tree.