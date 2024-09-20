# Problem 118: Pascal's Triangle

**Problem Link**: [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Pascal's Triangle, Dynamic Programming, Array

## Problem Statement

Given an integer `numRows`, return the first `numRows` of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it.

### Example 1:
```
Input: numRows = 5
Output: 
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
```

### Example 2:
```
Input: numRows = 1
Output: [[1]]
```

### Constraints:
- `1 <= numRows <= 30`

## Solution Explanation

Pascal's Triangle is a triangular array where each entry is the sum of the two numbers above it, except for the boundary numbers which are always 1.

### Approach:
1. **Initialization**: We initialize each row to have `i+1` elements, where `i` is the row index. Each row starts and ends with `1`.
2. **Filling the Inner Values**: For the elements between the boundary values, we calculate each element as the sum of the two values from the previous row: the one directly above it and the one to its left.
3. **Dynamic Programming Concept**: Each row is built iteratively based on the values from the previous row, so no need for recursion.

### Code:
- [C++ Solution](./solution_1.cpp)
- [Python Solution](./solution_2.py)
  
## Complexity Analysis:

- **Time Complexity**: O(n^2), where `n` is the number of rows. We compute each element of Pascal’s Triangle row by row.
  
- **Space Complexity**: O(n^2), as we store all elements of the triangle up to `numRows`.
