# Problem 169: Majority Element

**Problem Link**: [LeetCode Problem 169](https://leetcode.com/problems/majority-element/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Hash Table, Boyer-Moore Voting Algorithm, Divide and Conquer

## Problem Statement

Given an array `nums` of size `n`, return the majority element. The majority element is the element that appears more than `⌊n / 2⌋` times.

You may assume that the majority element always exists in the array.

### Example 1:
**Input**: 
```
nums = [3, 2, 3]
```
**Output**: 
```
3
```

### Example 2:
**Input**: 
```
nums = [2, 2, 1, 1, 1, 2, 2]
```
**Output**: 
```
2
```

### Constraints:
- `n == nums.length`
- `1 <= n <= 5 * 10^4`
- `-10^9 <= nums[i] <= 10^9`
- The majority element always exists in the array.

## Solution Explanation

The problem asks to return the element that appears more than `n / 2` times in an array. Two efficient approaches can be used to solve this problem.

### Approach 1: Boyer-Moore Voting Algorithm (C++)

This is an optimal solution with O(n) time and O(1) space. The algorithm works by maintaining a **candidate** for the majority element and a **count**. We increment the count when we encounter the candidate and decrement it when we find a different element. When the count reaches zero, we switch the candidate to the current element. After one pass, the candidate is guaranteed to be the majority element.

### Approach 2: Hash Map (JavaScript)

We use a **hash map** (or object in JavaScript) to store the count of each element in the array. As soon as an element's count exceeds `n / 2`, we return that element. This approach also runs in O(n) time, but uses O(n) space for storing element frequencies.

## Code

- [C++ Solution (Boyer-Moore Voting Algorithm)](./solution_1.cpp)
- [JavaScript Solution (Hash Map Approach)](./solution_2.js)

## Complexity Analysis

### C++ Solution (Boyer-Moore Voting Algorithm):
- **Time Complexity**: O(n), where `n` is the length of the array. We traverse the array once.
- **Space Complexity**: O(1), since we only use two variables to store the candidate and count.

### JavaScript Solution (Hash Map Approach):
- **Time Complexity**: O(n), where `n` is the length of the array. We traverse the array once.
- **Space Complexity**: O(n), since we use a hash map to store the frequency of elements.

Both approaches efficiently solve the problem, with the **Boyer-Moore Voting Algorithm** being more space-efficient, while the **Hash Map** approach is easier to understand and implement.