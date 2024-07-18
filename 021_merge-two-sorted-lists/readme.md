Here's a detailed README.md for the "Merge Two Sorted Lists" problem, using the provided template:

```markdown
# Problem Number and Title: 21. Merge Two Sorted Lists

**Problem Link**: [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Linked List, Recursion

## Problem Statement

Given the heads of two sorted linked lists `list1` and `list2`, the task is to merge the two lists into a single sorted list. The new list should be built by splicing together the nodes of the first two lists, and the sorted order should be maintained. Return the head of the merged linked list.

## Solution Explanation

The solution uses a recursive approach to merge the two sorted linked lists efficiently. At each step of recursion, we compare the values of the nodes at the heads of the lists. We link the smaller node to the result list and proceed recursively with the rest of the elements in that list and the entire other list. The recursion base case is when one of the lists is empty, in which case we simply return the non-empty list since it is already sorted.

### Approach
1. **Base Case**: If one of the lists is `null`, return the other list. This handles cases where one or both lists are empty.
2. **Recursive Case**: Compare the heads of both lists:
   - Link the smaller node to the merged list.
   - Recursively call the function to handle the next node of the list that had the smaller element and the current head of the other list.
3. **Return**: The head of the merged list is returned up the recursive call stack, ultimately giving us the merged sorted list starting from the smallest element.

## Codes

- [Solution 1](./solution_1.js)
- [Solution 2](./solution_2.cpp)

## Complexity Analysis
- **Time Complexity**: O(n + m), where `n` and `m` are the lengths of the two lists. Each recursive call processes one node of either `list1` or `list2`, and there are `n + m` calls in total.
- **Space Complexity**: O(n + m) in the worst case due to the recursive call stack. In the best case, where the recursive depth is balanced, the space complexity is O(log(n + m)).
