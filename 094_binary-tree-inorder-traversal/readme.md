# Problem 94: Binary Tree Inorder Traversal

**Problem Link**: [LeetCode Problem - Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Binary Tree, Inorder Traversal, Recursion, Stack, DFS

## Problem Statement

Given the root of a binary tree, return the **inorder traversal** of its nodes' values. In an inorder traversal, we visit the left subtree, then the root node, and finally the right subtree.

### Example 1:
```
Input: root = [1, null, 2, 3]
Output: [1, 3, 2]
```

### Example 2:
```
Input: root = [1, 2, 3, 4, 5, null, 8, null, null, 6, 7, 9]
Output: [4, 2, 6, 5, 7, 1, 3, 9, 8]
```

### Example 3:
```
Input: root = []
Output: []
```

### Example 4:
```
Input: root = [1]
Output: [1]
```

## Solution Explanation

We can solve this problem using two main approaches:
1. **Recursive Approach**: A simple recursive method to perform an inorder traversal of the binary tree, visiting the left subtree, the root node, and the right subtree.
2. **Iterative Approach**: In this method, we simulate the recursion using an explicit stack to manage the traversal order without recursion. This approach avoids potential stack overflow in deeply nested trees.

### Approach

1. **Recursive Inorder Traversal**:
    - Traverse the left subtree.
    - Visit the root node and append its value to the result.
    - Traverse the right subtree.
   
2. **Iterative Inorder Traversal**:
    - Use an explicit stack to simulate the recursive calls.
    - Traverse down the left subtree, pushing nodes onto the stack.
    - When no more left nodes are available, pop nodes from the stack, process them, and explore their right subtree.

## Code
- [C++ Recursive Solution](./solution_1.cpp)
- [Python Iterative Solution](./solution_2.py)

## Complexity Analysis

### Recursive Approach:
- **Time Complexity**: O(n), where `n` is the number of nodes in the binary tree, as each node is visited exactly once.
- **Space Complexity**: O(n) in the worst case, due to the recursive stack (in the case of a completely unbalanced tree).

### Iterative Approach:
- **Time Complexity**: O(n), as we visit each node exactly once.
- **Space Complexity**: O(n) for the stack used in the iterative approach (in the case of a completely unbalanced tree, the stack could store up to `n` nodes).

