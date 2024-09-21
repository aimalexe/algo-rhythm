# Problem 160: Intersection of Two Linked Lists

**Problem Link**: [LeetCode Problem 160](https://leetcode.com/problems/intersection-of-two-linked-lists/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Linked List, Two Pointers, Intersection

## Problem Statement

Given the heads of two singly linked lists, `headA` and `headB`, return the node at which the two lists intersect. If the two linked lists have no intersection, return `null`.

- Each linked list must retain its original structure after the function returns.
- You may assume there are no cycles anywhere in the entire linked structure.

### Example 1:

**Input**:
```
IntersectVal = 8
listA = [4,1,8,4,5]
listB = [5,6,1,8,4,5]
skipA = 2, skipB = 3
```

**Output**: Intersected at '8'

**Explanation**: The linked lists begin to intersect at node `8`.

### Example 2:

**Input**:
```
IntersectVal = 2
listA = [1,9,1,2,4]
listB = [3,2,4]
skipA = 3, skipB = 1
```

**Output**: Intersected at '2'

**Explanation**: The linked lists begin to intersect at node `2`.

### Example 3:

**Input**:
```
IntersectVal = 0
listA = [2,6,4]
listB = [1,5]
skipA = 3, skipB = 2
```

**Output**: No intersection

**Explanation**: The two linked lists do not intersect.

## Solution Explanation

To solve this problem, we need to find the node where the two linked lists intersect. The solution can be approached optimally using two different strategies:

### Approach 1 (C++): Two Pointers Technique
1. Use two pointers `ptrA` and `ptrB` to traverse the two linked lists.
2. Traverse the lists, and when one pointer reaches the end, move it to the head of the other list.
3. Continue traversing both lists until the pointers meet, which will be the intersection point. If no intersection exists, the pointers will both be `nullptr` at the same time.
   
This approach ensures both pointers traverse an equal number of nodes after accounting for the differing lengths of the two lists.

### Approach 2 (Dart): Length Difference Technique
1. First, calculate the lengths of both lists.
2. Align the starting points of the two lists by skipping nodes in the longer list.
3. Traverse both lists simultaneously, checking for the intersection node. If no intersection exists, return `null`.

## Code
- [Approach 1: C++ Solution (Two Pointers)](./solution_1.cpp)
- [Approach 2: Dart Solution (Length Difference)](./solution_2.dart)

## Complexity Analysis

### C++ Solution (Two Pointers):
- **Time Complexity**: O(m + n), where `m` is the length of list A and `n` is the length of list B. Each pointer traverses both lists once.
- **Space Complexity**: O(1), as we only use two pointers.

### Dart Solution (Length Difference):
- **Time Complexity**: O(m + n), where `m` is the length of list A and `n` is the length of list B.
- **Space Complexity**: O(1), since we only use a few variables for storing lengths and pointers.
