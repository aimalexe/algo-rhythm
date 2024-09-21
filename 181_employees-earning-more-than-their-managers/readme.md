# Problem 181: Employees Earning More Than Their Managers

**Problem Link**: [LeetCode Problem 181](https://leetcode.com/problems/employees-earning-more-than-their-managers/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: SQL, Self-Join, Pandas, DataFrame

## Problem Statement

You are given a table named `Employee` that contains the following columns:

| Column Name | Type    |  
|-------------|---------|  
| id          | int     |  
| name        | varchar |  
| salary      | int     |  
| managerId   | int     |  

- `id` is the primary key for this table.
- Each row of this table indicates the ID of an employee, their name, salary, and the ID of their manager.

Write a solution to find the employees who earn more than their managers. Return the result table in any order.

### Example 1:

**Input**:

Employee table:
| id  | name  | salary | managerId |
|-----|-------|--------|-----------|
| 1   | Joe   | 70000  | 3         |
| 2   | Henry | 80000  | 4         |
| 3   | Sam   | 60000  | NULL      |
| 4   | Max   | 90000  | NULL      |

**Output**:

| Employee |
|----------|
| Joe      |


**Explanation**:
- `Joe` earns more than his manager `Sam`, while the others either don't have a manager or don't earn more than their manager.

---

## Solution Explanation

The problem requires us to find employees whose salary is greater than their manager's salary. This can be done by joining the `Employee` table with itself based on the `managerId` to compare salaries.

### Approach 1: SQL (Self-Join)

We perform a **self-join** on the `Employee` table by joining it with itself using the `managerId` as the linking field. After the join, we filter the rows where the employee's salary is greater than their manager's salary.

### Approach 2: Python (Pandas)

In Pandas, we simulate the SQL self-join by performing a **merge** on the `Employee` DataFrame using the `managerId` field. After merging, we filter the employees whose salary is greater than their manager's salary.

---

## Code
- [SQL Solution](./solution_1.sql)
- [Python Solution (Using Pandas)](./solution_2.py)

## Complexity Analysis

### SQL Solution:
- **Time Complexity**: O(n), where `n` is the number of rows in the `Employee` table.
- **Space Complexity**: O(n), due to the self-join and the result set.

### Python (Pandas) Solution:
- **Time Complexity**: O(n), where `n` is the number of rows in the `Employee` DataFrame.
- **Space Complexity**: O(n), due to the self-merge and filtering operations.
