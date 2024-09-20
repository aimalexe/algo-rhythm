# Problem 136: Single Number

**Problem Link**: [Single Number](https://leetcode.com/problems/single-number/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Bit Manipulation, XOR, Set

## Problem Statement

Given a non-empty array of integers `nums`, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

### Example 1:
- **Input**: `nums = [2, 2, 1]`
- **Output**: `1`

### Example 2:
- **Input**: `nums = [4, 1, 2, 1, 2]`
- **Output**: `4`

### Example 3:
- **Input**: `nums = [1]`
- **Output**: `1`

### Constraints:
- `1 <= nums.length <= 3 * 10^4`
- `-3 * 10^4 <= nums[i] <= 3 * 10^4`
- Each element in the array appears twice except for one element which appears only once.

## Solution Explanation

We will solve the problem using two approaches:
1. **Bit Manipulation (XOR)**: This is an optimal approach to solve the problem in O(n) time with O(1) space using XOR operations.
2. **Set-Based Approach**: This approach uses a set to track elements, adding and removing elements as needed, with O(n) time and O(n) space complexity.

---

### Approach 1: Bit Manipulation (XOR) - C++

#### Explanation:
- XOR properties:
  1. `a ^ a = 0` (XOR-ing a number with itself gives 0)
  2. `a ^ 0 = a` (XOR-ing a number with 0 gives the number itself)
  3. XOR is both commutative and associative, meaning the order of operations doesn't matter.

- XOR-ing all numbers will cancel out the numbers that appear twice and leave the single number.

### [CPP Bit Manipulation Code](./solution_1.cpp)

### Complexity Analysis:
- **Time Complexity**: O(n)  
  We traverse the array once and apply XOR on each element.
- **Space Complexity**: O(1)  
  No extra space is used except for a single variable to hold the result.

---

### Approach 2: Set-Based Solution - JavaScript

#### Explanation:
We use a `Set` to keep track of the numbers. As we iterate through the array:
1. If the number is not in the set, we add it.
2. If it is already in the set, we remove it.
   
At the end, the only number left in the set will be the single number.

### [JS Set method Code](./solution_2.js)

### Complexity Analysis:
- **Time Complexity**: O(n)  
  We traverse the array once and perform constant time operations on the set.
- **Space Complexity**: O(n)  
  We use a `Set` to store elements, which in the worst case could be as large as the number of unique elements.