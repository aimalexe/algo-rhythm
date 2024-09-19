# Problem 110: Balanced Binary Tree

**Problem Link**: [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Tree, Binary Search Tree (BST), Recursion, Depth-First Search (DFS)

## Problem Statement

Given a binary tree, determine if it is height-balanced. A height-balanced binary tree is a tree where the depth of the two subtrees of every node never differs by more than one.

## Solution Explanation

To determine whether a binary tree is balanced, we can use a recursive function that checks the height of the left and right subtrees. If the difference in height between the two subtrees is more than 1, the tree is unbalanced. We propagate this information up the tree by returning a special value (-1) when a subtree is unbalanced. The recursion ensures that all subtrees are checked for balance as we calculate the height of each node.

### Approach
1. **Recursive Depth-First Search (DFS)**: 
    - For each node, calculate the height of its left and right subtrees.
    - If at any point the difference in height between the two subtrees is greater than 1, mark the tree as unbalanced by returning `-1`.
    - Otherwise, return the height of the current node.
    
2. **Base Case**: If the node is null, its height is considered 0, as an empty tree is height-balanced.

3. **Efficiency**: The algorithm avoids recalculating heights multiple times, ensuring it checks the height in a single pass through the tree.

## Code

### C++ Solution
- [C++ Solution](./solution_1.cpp)
- [JS Solution](./solution_2.js)

## Complexity Analysis

- **Time Complexity**: O(n)  
  The time complexity is O(n), where `n` is the number of nodes in the tree. This is because we visit every node once to calculate its height and check if it is balanced.

- **Space Complexity**: O(h)  
  The space complexity is O(h), where `h` is the height of the tree due to the recursive function calls on the stack. In the worst case (if the tree is completely unbalanced), the height `h` can be as large as `n`. In the best case (if the tree is perfectly balanced), `h` would be log(n).