# Problem 191: Number of 1 Bits

**Problem Link**: [LeetCode - Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Bit Manipulation, Divide and Conquer

## Problem Statement

Write a function that takes the binary representation of a positive integer and returns the number of '1' bits it has (also known as the Hamming weight). Given an unsigned integer, the task is to count how many bits in the binary representation are set to `1`.

### Example:

- **Input**: `n = 11`  
  **Output**: `3`  
  **Explanation**: Binary representation of `11` is `1011`, which has three `1` bits.

- **Input**: `n = 128`  
  **Output**: `1`  
  **Explanation**: Binary representation of `128` is `10000000`, which has one `1` bit.

- **Input**: `n = 2147483645`  
  **Output**: `30`  
  **Explanation**: Binary representation of `2147483645` contains thirty `1` bits.

## Solution Explanation

To solve this problem, we leverage **bit manipulation** to check each bit in the binary representation of the number. By performing a bitwise AND (`&`) operation between the number and 1, we can check whether the least significant bit (LSB) is `1`. We then right shift the number to process the next bit until the number becomes `0`.

### Approach

1. **Bitwise Check**: Use the `&` operator to determine if the current bit is `1`.
2. **Shift Right**: Right shift the number by 1 (`n >>= 1`) to move the next bit to the LSB position.
3. **Count Set Bits**: Increment the count whenever the LSB is `1`.
4. Repeat the process until the number becomes `0`.

## Code
- [C++ Solution](./solution_1.cpp)
- [TypeScript Solution](./solution_2.ts)

## Complexity Analysis

- **Time Complexity**: O(k), where `k` is the number of bits in the integer `n`. Since we process each bit once, the time complexity is proportional to the number of bits.
- **Space Complexity**: O(1), as no additional space is used other than variables to store the count of set bits. Both solutions operate in constant space.