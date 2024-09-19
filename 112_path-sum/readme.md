# Problem 112: Path Sum

**Problem Link**: [Path Sum](https://leetcode.com/problems/path-sum/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Tree, Depth-First Search (DFS), Recursion, Stack, Tree Traversal

## Problem Statement

Given the root of a binary tree and an integer `targetSum`, return `true` if the tree has a root-to-leaf path such that adding up all the values along the path equals `targetSum`.

A **leaf** is a node with no children.

### Example 1:

```
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: The root-to-leaf path with the target sum is shown.
```

### Example 2:

```
Input: root = [1,2,3], targetSum = 5
Output: false
Explanation: There are two root-to-leaf paths in the tree:
(1 --> 2): The sum is 3.
(1 --> 3): The sum is 4.
There is no root-to-leaf path with sum = 5.
```

### Example 3:

```
Input: root = [], targetSum = 0
Output: false
Explanation: Since the tree is empty, there are no root-to-leaf paths.
```

### Constraints:
- The number of nodes in the tree is in the range `[0, 5000]`.
- `-1000 <= Node.val <= 1000`
- `-1000 <= targetSum <= 1000`

## Solution Explanation

### C++ (Recursive DFS Approach)

This approach uses a recursive depth-first search (DFS) to check if there exists a root-to-leaf path that equals the target sum. The idea is to recursively subtract the current node’s value from the target sum, and then check if any of the children can fulfill the remaining target.

### Approach:
1. **Base Case**: If the current node is `null`, return `false` because we cannot have a valid path.
2. **Leaf Check**: If the current node is a leaf (both children are `null`), check if the node’s value is equal to the remaining `targetSum`. If so, return `true`.
3. **Recursion**: Recursively call the function for the left and right children, subtracting the current node's value from `targetSum`. If either returns `true`, return `true`.

### Code:
- [Cpp Recursive Solution](./solution_1.cpp)

### Complexity Analysis:

- **Time Complexity**: O(n) where `n` is the number of nodes in the tree. We visit each node once.
- **Space Complexity**: O(h) where `h` is the height of the tree (due to recursion stack). The worst-case space complexity is O(n) for a skewed tree.

---

### TypeScript (Iterative DFS Approach with Stack)

This approach uses an iterative DFS with a stack to avoid recursion. The stack holds pairs of nodes and the current remaining target sum. We traverse the tree and update the target sum as we visit each node. If we reach a leaf node and the remaining sum is 0, the path exists.

### Approach:
1. **Stack**: We use a stack to hold pairs of nodes and the remaining target sum.
2. **Iterate**: While the stack is not empty, pop the top node and check if it is a leaf node with the remaining sum equal to zero. If so, return `true`.
3. **Push**: Add the left and right children of the node to the stack with their corresponding target sums.

### Code:
- [TypeScript Recursive Solution](./solution_2.ts)

### Complexity Analysis:

- **Time Complexity**: O(n), as we iterate over each node in the tree.
- **Space Complexity**: O(n), as we use a stack to store nodes and sums.