# Problem 292: Nim Game

**Problem Link**: [LeetCode Problem 292](https://leetcode.com/problems/nim-game/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Game Theory, Modulo Operation, Dynamic Programming

## Problem Statement

You are playing the Nim Game with your friend:
- Initially, there is a heap of stones on the table.
- You and your friend will alternate taking turns, and you go first.
- On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.
- The player who removes the last stone wins.

Given `n`, the number of stones in the heap, return `true` if you can win the game assuming both you and your friend play optimally, otherwise return `false`.

### Example 1:
- Input: `n = 4`
- Output: `false`

### Example 2:
- Input: `n = 1`
- Output: `true`

### Example 3:
- Input: `n = 2`
- Output: `true`

## Solution Explanation

### Approach 1 (C++ and TypeScript - Mathematical Modulo):
In this approach, we observe a key insight: if `n % 4 == 0`, then you will always lose the game. This is because no matter how optimally you play, your opponent can always leave you with a multiple of 4 stones after their turn. Hence, you will lose if `n % 4 == 0` and win otherwise.

### Approach 2 (Python - Dynamic Programming):
In the dynamic programming approach, we calculate the winning strategy for each number of stones from 1 to `n`. We use a list `dp` to store whether the player can win for each value of `n`. The base cases are when `n` is 1, 2, or 3, where the player can always win. For larger values of `n`, the result depends on whether the player can leave the opponent in a losing position by taking 1, 2, or 3 stones.

## Code

- [C++ Solution (Mathematical Modulo)](./solution_1.cpp)
- [TypeScript Solution (Mathematical Modulo)](./solution_2.ts)
- [Python Solution (Dynamic Programming)](./solution_3.py)

## Complexity Analysis

### C++ and TypeScript Solution (Mathematical Modulo):
- **Time Complexity**: O(1) since the modulo operation is performed in constant time.
- **Space Complexity**: O(1) as no extra space is used.

### Python Solution (Dynamic Programming):
- **Time Complexity**: O(n), where `n` is the number of stones. We calculate the result for every number of stones from 1 to `n`.
- **Space Complexity**: O(n), as we store the results in an array of size `n`.

This problem demonstrates a classic game theory problem, and the modulo approach is the most efficient way to determine the winner. The dynamic programming solution, while illustrative, is less optimal in terms of space and time efficiency.