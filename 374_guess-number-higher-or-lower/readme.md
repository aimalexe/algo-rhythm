# Problem 374: Guess Number Higher or Lower

**Problem Link**: [LeetCode Problem 374](https://leetcode.com/problems/guess-number-higher-or-lower/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Binary Search, Linear Search, API

## Problem Statement

We are playing the Guess Game. The game is as follows:

I pick a number from `1` to `n`. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API `int guess(int num)` which returns three possible results:
- `-1`: Your guess is higher than the number I picked.
- `1`: Your guess is lower than the number I picked.
- `0`: Your guess is equal to the number I picked.

Return the number that I picked.

### Example 1:
```
Input: n = 10, pick = 6
Output: 6
```

### Example 2:
```
Input: n = 1, pick = 1
Output: 1
```

### Example 3:
```
Input: n = 2, pick = 1
Output: 1
```

### Constraints:
- `1 <= n <= 2^31 - 1`
- `1 <= pick <= n`

---

## Solution Explanation

We provide three solutions with different approaches in **C++**, **Dart**, and **C**.

### Approach

1. **C++ (Binary Search Approach)**:
   - We perform binary search between `1` and `n`, narrowing down the range based on the result of the `guess()` API. The search space is reduced by half with each step, making it highly efficient.

2. **Dart (Binary Search Approach)**:
   - A similar binary search approach is implemented in Dart, using integer division to avoid overflow while calculating the mid-point. The guess is refined in a manner similar to the C++ approach.

3. **C (Linear Search Approach)**:
   - This approach uses a linear search, sequentially guessing from `1` to `n`. It checks each number one by one using the `guess()` API until the correct number is found. This approach is simpler but less efficient than binary search.

## Code

- [C++ Solution (Binary Search)](./solution_1.cpp)
- [Dart Solution (Binary Search)](./solution_2.dart)
- [C Solution (Linear Search)](./solution_3.c)


## Complexity Analysis

### C++ Solution (Binary Search)
- **Time Complexity**: O(log n), where `n` is the range from which we are guessing. Binary search reduces the possible range by half in each iteration.
- **Space Complexity**: O(1), as we are not using any additional space except for the variables needed for binary search.

### Dart Solution (Binary Search)
- **Time Complexity**: O(log n), where `n` is the range of numbers. Like the C++ solution, binary search is used, ensuring logarithmic complexity.
- **Space Complexity**: O(1), as only a few variables are needed for the binary search process.

### C Solution (Linear Search)
- **Time Complexity**: O(n), where `n` is the range of numbers. Linear search checks each number sequentially, which results in a time complexity of O(n).
- **Space Complexity**: O(1), as no additional memory is required other than a few loop variables.
