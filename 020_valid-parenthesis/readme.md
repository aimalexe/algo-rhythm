# Problem 20: Valid Parentheses

**Problem Link**: [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Stack, String Parsing

## Problem Statement

Given a string containing just the characters `'(', ')', '{', '}', '['` and `']'`, determine if the input string is valid. An input string is valid if:
1. Open brackets are closed by the same type of brackets.
2. Open brackets are closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

## Solution Explanation

The solution uses a stack to track opening brackets and a hash map to associate each closing bracket with its corresponding opening bracket. This method ensures that brackets are closed in the correct order and that each type of closing bracket has a matching opening bracket.

### Approach
1. **Initialize a Stack**: Use a stack to keep track of opening brackets as they appear in the string.
2. **Create a Bracket Map**: Utilize an `unordered_map` to link each type of closing bracket with its opening counterpart for quick look-up.
3. **Iterate Through the String**: For each character in the string, perform the following:
   - If it's a closing bracket, check if the stack's top element is the matching opening bracket. If not, the string is invalid.
   - If it's an opening bracket, push it onto the stack.
4. **Final Check**: After processing all characters, if the stack is empty, the string is valid; otherwise, it is invalid.

## Code

- [Solution 1](./solution_1.js)
- [Solution 2](./solution_2.cpp)

## Complexity Analysis
- **Time Complexity**: O(n), where \( n \) is the number of characters in the string. Each character is processed exactly once when it is pushed to or popped from the stack.
- **Space Complexity**: O(n) in the worst case, which occurs when all characters are opening brackets. This requires space proportional to the input size for the stack.
