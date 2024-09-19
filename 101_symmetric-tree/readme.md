# Problem 101: Symmetric Tree

**Problem Link**: [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Recursion, Queue, Binary Tree, Depth-First Search (DFS), Breadth-First Search (BFS)

## Problem Statement

Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

### Example 1:
- **Input**: `root = [1,2,2,3,4,4,3]`
- **Output**: `true`
  
### Example 2:
- **Input**: `root = [1,2,2,null,3,null,3]`
- **Output**: `false`

### Constraints:
- The number of nodes in the tree is in the range [1, 1000].
- `-100 <= Node.val <= 100`

## Solution Explanation

To determine if a tree is symmetric, we need to check if the left subtree is a mirror reflection of the right subtree. There are two primary ways to solve this:
1. **Recursive Approach**: Compare the left and right subtrees recursively, ensuring that for each pair of nodes, the left node of the left subtree matches the right node of the right subtree, and vice versa.
2. **Iterative Approach**: Use a queue to perform a level-order traversal of the tree, comparing nodes in pairs to verify symmetry.

### Approach

1. **Recursive Approach**:
   - Define a helper function that checks whether two subtrees are mirrors of each other.
   - Recursively compare the left and right subtrees.
   - Base cases are when both subtrees are `None` (symmetric) or only one is `None` (not symmetric).

2. **Iterative Approach**:
   - Use a queue to compare nodes in pairs.
   - For each pair, check if they are both `None`. If only one is `None`, the tree is not symmetric.
   - Enqueue children in mirrored order: left's left with right's right, and left's right with right's left.

## Code
- [C++ Recursive Solution](./solution_1.cpp)
- [Python Iterative Solution](./solution_2.py)

## Complexity Analysis

### C++ Recursive Solution:
- **Time Complexity**: O(n), where `n` is the number of nodes. Every node is visited once.
- **Space Complexity**: O(h), where `h` is the height of the tree. This is the space taken up by the recursion stack. In the worst case, `h = n` for a skewed tree.

### Python Iterative Solution:
- **Time Complexity**: O(n), where `n` is the number of nodes. Each node is processed once.
- **Space Complexity**: O(n), due to the space used by the queue, which at most contains `n/2` nodes in the worst case (a full binary tree).