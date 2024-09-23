# Problem 196: Delete Duplicate Emails

**Problem Link**: [LeetCode - Delete Duplicate Emails](https://leetcode.com/problems/delete-duplicate-emails/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: SQL, Pandas, Data Cleaning, Duplicate Removal

## Problem Statement

You are given a table `Person` with the following schema:

| Column Name | Type    |
|-------------|---------|
| id          | int     |
| email       | varchar |

The `id` is the primary key for this table, and each row contains an email. You are asked to write a solution to **delete all duplicate emails**, keeping only the row with the smallest `id` for each email.

### Example:

| id | email             |
|----|-------------------|
| 1  | john@example.com   |
| 2  | bob@example.com    |
| 3  | john@example.com   |

After running the query, the table should look like:

| id | email             |
|----|-------------------|
| 1  | john@example.com   |
| 2  | bob@example.com    |

### Constraints:
- Each row in the table contains an email.
- Emails will not contain uppercase letters.

## Solution Explanation

We will solve this problem using both SQL and Python (Pandas) approaches.

### Approach

1. **SQL Solution**:
   - We use a `DELETE` query with a `JOIN` to delete duplicate rows where the email is the same, but keep the row with the smallest `id`.

2. **Python Solution (Pandas)**:
   - We create a DataFrame to represent the `Person` table and use the `drop_duplicates()` method to remove duplicate emails while keeping the one with the smallest `id`.

## Code
- [SQL Script](./solution_1.sql)
- [Python Script](./solution_2.py)

## Complexity Analysis

### SQL Solution:

- **Time Complexity**: O(n^2) - In the worst case, the query may involve comparing each row to every other row (due to the self-join), leading to O(n^2) time complexity.
- **Space Complexity**: O(1) - The space used is constant, as the operation is performed directly on the table.

### Pandas Solution:

- **Time Complexity**: O(n) - The `drop_duplicates()` function in Pandas runs in linear time with respect to the number of rows in the DataFrame.
- **Space Complexity**: O(n) - Pandas requires additional space to hold the DataFrame in memory.
