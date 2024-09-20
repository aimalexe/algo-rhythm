# Problem 121: Best Time to Buy and Sell Stock

**Problem Link**: [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: Array, Greedy Algorithm, Kadane's Algorithm

## Problem Statement

You are given an array `prices` where `prices[i]` represents the price of a given stock on the `i`-th day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`.

## Solution Explanation

We will use two different approaches to solve the problem efficiently. Both approaches aim to calculate the maximum profit that can be made by buying and selling a stock on two different days.

### Approach 1: Two Pointer Method (C++)

In this approach, we use a greedy method to track the minimum price encountered so far while traversing the array. For each price, we calculate the potential profit if we were to sell at that price and update the maximum profit accordingly.

### Approach 2: Kadane's Algorithm (Python)

This approach modifies Kadane's Algorithm (typically used for maximum subarray problems) to calculate the maximum difference (profit) between consecutive prices. By treating the problem as a maximum subarray of differences, we can efficiently compute the maximum profit.

## Code
- [C++: Two Pointer Approach](./solution_1.cpp)
- [Python: Kadane's Algorithm Approach](./solution_2.py)


## Complexity Analysis

### Approach 1: Two Pointer Method (C++)
- **Time Complexity**: O(n)  
  We traverse the array of stock prices once, calculating minimum price and maximum profit in constant time.
- **Space Complexity**: O(1)  
  Only a few variables are used to track minimum price and maximum profit, so the space usage is constant.

### Approach 2: Kadane's Algorithm (Python)
- **Time Complexity**: O(n)  
  We calculate the differences between consecutive prices and apply Kadane's algorithm in a single pass through the array.
- **Space Complexity**: O(1)  
  Only a few variables are used to track the current profit and maximum profit, so the space usage is constant.
