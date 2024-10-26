# Problem 338: Counting Bits

**Problem Link**: [Counting Bits Problem](https://leetcode.com/problems/counting-bits/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Dynamic Programming, Bit Manipulation, Brian Kernighan's Algorithm

## Problem Statement

Given an integer `n`, return an array `ans` of length `n + 1` such that for each `i` (0 <= i <= n), `ans[i]` is the number of 1's in the binary representation of `i`.

### Example 1:
- Input: `n = 2`
- Output: `[0, 1, 1]`
- Explanation: 
    - 0 (binary `0`) has 0 ones.
    - 1 (binary `1`) has 1 one.
    - 2 (binary `10`) has 1 one.

### Example 2:
- Input: `n = 5`
- Output: `[0, 1, 1, 2, 1, 2]`
- Explanation: 
    - 0 (binary `0`) has 0 ones.
    - 1 (binary `1`) has 1 one.
    - 2 (binary `10`) has 1 one.
    - 3 (binary `11`) has 2 ones.
    - 4 (binary `100`) has 1 one.
    - 5 (binary `101`) has 2 ones.

## Solution Explanation

We provide two different approaches to solving the problem:

### Approach

1. **Dynamic Programming (C++)**: 
   - For each number `i`, its number of set bits (1's) is equal to the number of set bits in `i // 2` plus `i % 2`. This approach leverages previous results to build the solution incrementally.

2. **Brian Kernighan's Algorithm (Dart)**: 
   - For each number `i`, we count the number of 1's in its binary representation by repeatedly flipping the least significant set bit (using `i &= i - 1`) until the number becomes zero. This is an efficient bit manipulation technique.

## Code

- [Solution 1: C++ Dynamic Programming Approach](./solution_1.cpp)
- [Solution 2: Dart Brian Kernighan's Algorithm](./solution_2.dart)

## Complexity Analysis

### Solution 1: C++ (Dynamic Programming)

- **Time Complexity**: O(n) – We iterate from 0 to `n`, and each iteration takes constant time.
- **Space Complexity**: O(n) – We store the result array of size `n+1`.

### Solution 2: Dart (Brian Kernighan's Algorithm)

- **Time Complexity**: O(n * k) – Where `k` is the number of bits in `n`. In the worst case, we iterate `k` times for each number in the range from 0 to `n`.
- **Space Complexity**: O(n) – We store the result array of size `n+1`.
