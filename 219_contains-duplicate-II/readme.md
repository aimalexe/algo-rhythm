# Problem Number 219: Contains Duplicate II

**Problem Link**: [LeetCode Problem](https://leetcode.com/problems/contains-duplicate-ii/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Hash Table, Sliding Window

## Problem Statement

Given an integer array `nums` and an integer `k`, return `true` if there are two distinct indices `i` and `j` in the array such that:
- `nums[i] == nums[j]`
- `abs(i - j) <= k`

Return `false` otherwise.

### Constraints:
- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `0 <= k <= 10^5`

## Solution Explanation

The problem is asking for finding duplicate elements in the array `nums` such that the difference in their indices is less than or equal to `k`. 

To solve this efficiently:
- We can use a hash table (or map) to store the most recent index of each number.
- As we iterate through the array, for each number, we check if the number exists in the map and if the difference between the current index and the stored index is less than or equal to `k`.
- If such a pair is found, we return `true`; otherwise, we continue checking for the next elements.
  
By using this approach, we can avoid a brute-force O(n^2) solution and achieve linear time complexity.

### Approach
1. Create an empty map (or hash table).
2. Traverse through the array `nums`:
   - If the current number exists in the map and the difference between the current index and the previous index of this number is less than or equal to `k`, return `true`.
   - Otherwise, update the map with the current index for this number.
3. If no such pair is found during the traversal, return `false`.

## Code
- [Solution 1: C++](./solution_1.cpp)
- [Solution 2: JavaScript](./solution_2.js)

## Complexity Analysis

- **Time Complexity**: O(n), since we are iterating through the array only once and using constant-time operations for map lookups and updates.
- **Space Complexity**: O(n), because the map stores at most `n` elements from the array in the worst case.