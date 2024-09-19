# Problem 108: Convert Sorted Array to Binary Search Tree

**Problem Link**: [Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Tree, Binary Search Tree, Divide and Conquer, Recursion

## Problem Statement

Given an integer array `nums` where the elements are sorted in ascending order, convert it to a **height-balanced** binary search tree (BST). A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

## Solution Explanation

The problem requires converting a sorted array into a balanced binary search tree. Since the input array is sorted in ascending order, we can utilize the middle element of the array to act as the root of the tree. We recursively use the middle element of each left and right subarray to form the left and right subtrees, ensuring the tree remains balanced.

### Approach

1. **Base Condition**: If the subarray becomes empty, return `null`.
2. **Recursion**: Choose the middle element of the current subarray to be the root, and recursively apply the same approach to the left and right halves to build the subtrees.
3. **In-order Traversal**: To test the correctness, an in-order traversal of the constructed BST should match the input array in ascending order.

## Code
- [C++ Solution](./solution_1.cpp)
- [Dart Solution](./solution_2.dart)


## Complexity Analysis

### **C++ Solution:**
- **Time Complexity**: O(n), where `n` is the number of elements in the array. Each element is processed once in recursive calls.
- **Space Complexity**: O(log n) due to recursion stack depth for balanced BST construction.

### **Dart Solution:**
- **Time Complexity**: O(n), as every element of the array is visited once.
- **Space Complexity**: O(log n), as recursive calls require stack space proportional to the height of the tree in a balanced BST.