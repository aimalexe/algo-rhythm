# Problem 1: Two Sum

### Problem Link
[https://leetcode.com/problems/two-sum/description/](https://leetcode.com/problems/two-sum/description/)

### Difficulty Level
Easy

### Key Concepts/Tags
- Array
- Hash Table

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`. Each input would have exactly one solution, and the same element may not be used twice. The solution should return the indices in any order.

## Solution Explanation
The solution uses a hash table to track the array values and their corresponding indices for quick lookup of complement values needed to meet the target sum. The algorithm works in two main passes through the array:

### Approach
1. **Build Hash Table**:
   - Traverse the array and map each element's value to its index in the hash table. This allows quick access to check if the complement of a current element (needed to reach the target) exists in the array.

2. **Find Two Indices**:
   - Iterate through the array again and for each element, calculate the complement by subtracting the current element's value from the target.
   - Check if this complement exists in the hash table and ensure it's not the same as the current index (as you can't use the same element twice).
   - If such a complement is found, return the indices of the current element and the found complement.

## Code
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        int length = nums.size();

        // Build hash table mapping its value to index
        for (int index = 0; index < length; index++) {
            table[nums[index]] = index;
        }

        // Find complement and see if it is in table and not mapping to the current index.
        for (int index = 0; index < length; index++) {
            int compliment = target - nums[index];
            if (table.count(compliment) && table[compliment] != index) {
                return {index, table[compliment]};
            }
        }

        return {}; // If not found, return null
    }
};
```

## Complexity Analysis
- **Time Complexity**: O(n), where n is the number of elements in the array. We traverse the list a maximum of two times.
- **Space Complexity**: O(n), as we use additional space for the hash table that stores up to n elements.
