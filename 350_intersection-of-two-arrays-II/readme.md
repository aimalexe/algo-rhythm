# Problem 350: Intersection of Two Arrays II

**Problem Link**: [LeetCode Problem 350](https://leetcode.com/problems/intersection-of-two-arrays-ii/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Hash Map, Two Pointers, Sorting

## Problem Statement

Given two integer arrays `nums1` and `nums2`, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays, and you may return the result in **any order**.

### Example 1:
```
Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
Output: [2, 2]
```

### Example 2:
```
Input: nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
Output: [4, 9]
Explanation: [9, 4] is also accepted.
```

### Constraints:
- `1 <= nums1.length, nums2.length <= 1000`
- `0 <= nums1[i], nums2[i] <= 1000`

### Follow Up:
- What if the given array is already sorted? How would you optimize your algorithm?
- What if `nums1`'s size is small compared to `nums2`'s size? Which algorithm is better?
- What if elements of `nums2` are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?

## Solution Explanation

We provide three different approaches in **C++**, **JavaScript**, and **TypeScript** to solve the problem efficiently. Each approach is based on different optimizations depending on the properties of the input data.

### Approach

1. **C++ (Hash Map Approach)**:
   - Use an unordered map (hash map) to store the frequency of elements in `nums1`. Then, iterate through `nums2` and for each element, check if it exists in the map and its count is greater than zero. Add it to the result and decrement the count.

2. **JavaScript (Two-Pointer with Sorted Arrays)**:
   - If the arrays are already sorted (or after sorting them), use a two-pointer technique to find intersections. Traverse both arrays with pointers and add the intersection elements to the result when the pointers point to equal values.

3. **TypeScript (Hash Map Approach)**:
   - Similar to the C++ approach, use a hash map to count occurrences of elements in `nums1`, then find the intersection by checking the counts of elements in `nums2`.

## Code

- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)
- [TypeScript Solution](./solution_3.ts)

## Complexity Analysis

### C++ Solution (Hash Map Approach)
- **Time Complexity**: O(n + m), where `n` is the size of `nums1` and `m` is the size of `nums2`.
- **Space Complexity**: O(n), where `n` is the size of `nums1` due to the hash map used to store element counts.

### JavaScript Solution (Two-Pointer with Sorted Arrays)
- **Time Complexity**: O(n log n + m log m), where `n` and `m` are the sizes of `nums1` and `nums2`, respectively. Sorting both arrays takes O(n log n + m log m) and a linear pass through both arrays is O(n + m).
- **Space Complexity**: O(1) excluding the result array, as we are not using any additional data structures except for the result list.

### TypeScript Solution (Hash Map Approach)
- **Time Complexity**: O(n + m), where `n` is the size of `nums1` and `m` is the size of `nums2`.
- **Space Complexity**: O(n), where `n` is the size of `nums1` due to the hash map.
