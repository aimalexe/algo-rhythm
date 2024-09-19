Here is the README for the **Same Tree** problem based on the solutions provided:

---

# Problem 100: Same Tree

**Problem Link**: [LeetCode Problem - Same Tree](https://leetcode.com/problems/same-tree/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Tree, Tree Traversal, Recursion, Iteration, Depth-First Search, Breadth-First Search

## Problem Statement

Given the roots of two binary trees `p` and `q`, write a function to check if they are the **same** or not.

Two binary trees are considered the same if they are **structurally identical**, and the nodes have the **same value**.

### Example 1:

```
Input: p = [1,2,3], q = [1,2,3]
Output: true
```

### Example 2:

```
Input: p = [1,2], q = [1,null,2]
Output: false
```

### Example 3:

```
Input: p = [1,2,1], q = [1,1,2]
Output: false
```

## Solution Explanation

We can solve this problem using two main approaches:
1. **Recursive Approach**: This approach recursively compares the nodes of both trees. If the values differ or the structure is not the same, the trees are not identical.
2. **Iterative Approach**: This approach uses a stack to simulate recursion and compare the trees' nodes in a depth-first manner.

### Approach

1. **Recursive Approach** (JavaScript):
    - Compare the root nodes of both trees.
    - If both are `null`, return `true`.
    - If one is `null` or the values are different, return `false`.
    - Recursively check the left and right subtrees.
   
2. **Iterative Approach** (C++):
    - Use a stack to push pairs of nodes from both trees.
    - If both nodes in a pair are `null`, continue.
    - If only one node is `null` or the values differ, return `false`.
    - Push the left and right children of both nodes to the stack.
    - Repeat until all nodes are processed.

## Code
- [C++ Iterative Solution](./solution_1.cpp)
- [JavaScript Recursive Solution](./solution_2.js)

## Complexity Analysis

### Recursive Approach (JavaScript):
- **Time Complexity**: O(n), where `n` is the total number of nodes in the tree. We visit every node exactly once.
- **Space Complexity**: O(h), where `h` is the height of the tree. The space complexity arises from the recursion stack, which in the worst case can go as deep as the height of the tree.

### Iterative Approach (C++):
- **Time Complexity**: O(n), where `n` is the total number of nodes in the tree. Each node is processed once.
- **Space Complexity**: O(h), where `h` is the height of the tree. The stack holds nodes, and in the worst case, it can store all nodes along one path from root to a leaf.
