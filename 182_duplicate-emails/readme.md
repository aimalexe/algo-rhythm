# Problem 182: Duplicate Emails

**Problem Link**: [LeetCode Problem 182](https://leetcode.com/problems/duplicate-emails/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: SQL, Group By, Pandas, Filtering, DataFrames

## Problem Statement

You are given a table named `Person` that contains the following columns:

| Column Name | Type    |  
|-------------|---------|  
| id          | int     |  
| email       | varchar |  

- `id` is the primary key for this table.
- Each row of this table contains an email. The emails are guaranteed to be non-NULL and contain only lowercase letters.

Write a solution to report all duplicate emails. Return the result table in any order.

### Example 1:

**Input**:

Person table:
| id | email   |
|----|---------|
| 1  | a@b.com |
| 2  | c@d.com |
| 3  | a@b.com |

**Output**:
| email   |
|---------|
| a@b.com |

**Explanation**:
- The email `a@b.com` is repeated twice, so it should be included in the output.

---

## Solution Explanation

The problem requires identifying duplicate emails from the `Person` table. This can be done by counting the occurrences of each email and selecting only those emails that appear more than once.

### Approach 1: SQL (Using Group By)

We group the `email` column and count how many times each email appears. If an email appears more than once, it is considered a duplicate, and we return it.

### Approach 2: Python (Pandas)

Using Pandas, we simulate the SQL group-by operation by grouping the DataFrame by `email` and filtering the emails that appear more than once using a `lambda` function.

---

## Code
- [SQL Solution](./solution_1.sql)
- [Python Solution (Using Pandas)](./solution_2.py)
  
## Complexity Analysis

### SQL Solution:
- **Time Complexity**: O(n), where `n` is the number of rows in the `Person` table.
- **Space Complexity**: O(n), for storing the grouped data.

### Python (Pandas) Solution:
- **Time Complexity**: O(n), where `n` is the number of rows in the `person` DataFrame.
- **Space Complexity**: O(n), due to the grouping and filtering operations.