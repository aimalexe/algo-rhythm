# Problem 190: Reverse Bits

**Problem Link**: [LeetCode Problem 190](https://leetcode.com/problems/reverse-bits/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Bit Manipulation, Binary Operations, Bitwise Shifts

## Problem Statement

Given a 32-bit unsigned integer `n`, reverse the bits of `n` and return the reversed result.

### Notes:
- The input must be treated as an unsigned 32-bit integer.
- In some languages (like Java), there is no unsigned integer type. The input and output will be given as signed integer types, but this does not affect your implementation since the binary representation is the same for signed and unsigned integers.
- If this function is called many times, consider how you would optimize it.

### Example 1:

**Input**:  
```
n = 00000010100101000001111010011100 (binary)
```
**Output**:  
```
964176192 (00111001011110000010100101000000) 
```

### Example 2:

**Input**:  
```
n = 11111111111111111111111111111101 (binary)
```
**Output**:  
```
3221225471 (10111111111111111111111111111111)
```

### Constraints:
- The input must be a binary string of length 32.

---

## Solution Explanation

To solve this problem, we use bit manipulation. The goal is to reverse the binary representation of the given 32-bit unsigned integer. We achieve this by:
1. Shifting the bits of the result to the left.
2. Extracting the least significant bit of the input integer.
3. Shifting the input integer to the right.
4. Appending the extracted bit to the result.

### Approach 1: C++ Bit Manipulation

In C++, we iterate over all 32 bits of the input integer, extract each bit, and place it in the correct position in the result. The solution is efficient and uses constant time and space.

### Approach 2: JavaScript Bitwise Operations

Similarly, in JavaScript, we can perform the same bit manipulation using bitwise operators. The solution ensures the result is treated as an unsigned 32-bit number using the `>>>` operator.

## Code
- [C++ Solution](./solution_1.cpp)
- [JavaScript Solution](./solution_2.js)

## Complexity Analysis

### Time Complexity:
- **C++ and JavaScript**: O(1)
   - The algorithm always iterates exactly 32 times (once for each bit), so the time complexity is constant.

### Space Complexity:
- **C++ and JavaScript**: O(1)
   - The algorithm uses a constant amount of space regardless of the input size.

Both solutions efficiently reverse the bits of the input integer in constant time and space.