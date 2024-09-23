# Problem 197: Rising Temperature

**Problem Link**: [LeetCode - Rising Temperature](https://leetcode.com/problems/rising-temperature/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: SQL, Pandas, Date Comparison, Temperature Analysis

## Problem Statement

You are given a table `Weather` with the following schema:

| Column Name | Type    |
|-------------|---------|
| id          | int     |
| recordDate  | date    |
| temperature | int     |

The `id` is the primary key of this table. Each row in this table contains the temperature on a certain day.

Write a solution to find all dates' `id` where the temperature is higher compared to the previous day's temperature. 

Return the result in any order.

### Example:

| id | recordDate | temperature |
|----|------------|-------------|
| 1  | 2015-01-01 | 10          |
| 2  | 2015-01-02 | 25          |
| 3  | 2015-01-03 | 20          |
| 4  | 2015-01-04 | 30          |

The expected output is:

| id |
|----|
| 2  |
| 4  |

### Explanation:

- On 2015-01-02, the temperature (25) was higher than the previous day (10), so `id = 2` is included.
- On 2015-01-04, the temperature (30) was higher than the previous day (20), so `id = 4` is included.

## Solution Explanation

We will solve this problem using both **SQL** and **Pandas** approaches.

### Approach

1. **SQL Solution**:
   - Use a **self-join** to compare the temperature of a given date with the previous date's temperature.
   - Select the rows where the current day's temperature is higher than the previous day's temperature.

2. **Pandas Solution**:
   - Use the `.shift()` method to create a column containing the previous day's temperature.
   - Filter the rows where the current day's temperature is higher than the previous day's temperature and return the corresponding `id`.

## Code
- [SQL Script](./solution_1.sql)
- [Python Script](./solution_2.py)

## Complexity Analysis

### SQL Solution:
- **Time Complexity**: O(n) - The query compares each row with its previous row, resulting in linear time complexity with respect to the number of rows.
- **Space Complexity**: O(1) - The query performs the comparison in place without requiring extra memory.

### Pandas Solution:
- **Time Complexity**: O(n) - The `shift()` function operates in linear time, and the filtering step also processes each row once.
- **Space Complexity**: O(n) - The DataFrame's size increases due to the additional `prev_temp` column used for comparison.
