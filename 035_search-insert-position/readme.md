# Problem 35: Search Insert Position

**Problem Link**: [Search insert position](https://leetcode.com/problems/search-insert-position/description/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Search, Array, Search

## Problem Statement

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.

**Examples:**
1. **Input**: `nums = [1, 3, 5, 6]`, `target = 5`
   - **Output**: `2`
   
2. **Input**: `nums = [1, 3, 5, 6]`, `target = 2`
   - **Output**: `1`
   
3. **Input**: `nums = [1, 3, 5, 6]`, `target = 7`
   - **Output**: `4`

**Constraints**:
- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` contains distinct values sorted in ascending order.
- `-10^4 <= target <= 10^4`

## Solution Explanation

The problem requires finding the position of the target in a sorted array, or the position where it should be inserted to maintain the sorted order. To achieve this efficiently, a binary search algorithm is employed, ensuring a logarithmic time complexity.

### Approach
1. **Binary Search**:
    - Initialize two pointers, `left` and `right`, representing the bounds of the search.
    - Calculate the `mid` index as the average of `left` and `right`.
    - If `nums[mid]` equals the `target`, return `mid`.
    - If `nums[mid]` is less than `target`, adjust the `left` pointer to `mid + 1`.
    - If `nums[mid]` is greater than `target`, adjust the `right` pointer to `mid - 1`.
    - Continue until `left` exceeds `right`. If `target` is not found, return `left` as the position where `target` should be inserted.

This approach ensures that the algorithm efficiently finds the correct index in O(log n) time complexity, which is optimal for this problem.

## Code
- [Solution 1](./solution_1.cpp)
- [Solution 2](./solution_2.dart)

## Complexity Analysis
- **Time Complexity**: O(log n) due to the binary search mechanism, which efficiently narrows down the search space by half with each iteration.
- **Space Complexity**: O(1) as the algorithm uses only a few variables and does not require additional space proportional to the input size.