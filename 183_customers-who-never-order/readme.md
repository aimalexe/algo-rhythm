# Problem 183: Customers Who Never Order

**Problem Link**: [LeetCode Problem 183](https://leetcode.com/problems/customers-who-never-order/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: SQL, Left Join, Pandas, Filtering, DataFrames

## Problem Statement

You are given two tables: 

1. `Customers` - Contains the customer details.
   
   | Column Name | Type    |  
   |-------------|---------|  
   | id          | int     |  
   | name        | varchar |  
   
   `id` is the primary key for this table. Each row of this table indicates the ID and name of a customer.

2. `Orders` - Contains details about customer orders.
   
   | Column Name | Type    |  
   |-------------|---------|  
   | id          | int     |  
   | customerId  | int     |  
   
   `id` is the primary key for this table. `customerId` is a foreign key referencing the ID from the `Customers` table.

You need to write a solution to find all customers who never ordered anything.

Return the result table in **any order**.

### Example 1:

**Input**:

Customers table:
| id | name  |
|----|-------|
| 1  | Joe   |
| 2  | Henry |
| 3  | Sam   |
| 4  | Max   |

Orders table:
| id | customerId |
|----|------------|
| 1  | 3          |
| 2  | 1          |

**Output**:
| Customers |
|-----------|
| Henry     |
| Max       |

**Explanation**: Henry and Max have never ordered anything.

---

## Solution Explanation

We need to find customers who do not have any orders. This is done by:
1. Performing a **LEFT JOIN** between the `Customers` table and the `Orders` table, matching customer IDs.
2. Filtering out the rows where the `Orders` table doesn't have a corresponding entry for the customer (i.e., where the `Orders` table’s ID is NULL).

### Approach 1: SQL (Using Left Join)

We will use a **LEFT JOIN** to find the customers who never ordered. If a customer did not place an order, their entry from the `Orders` table will be `NULL`.

### Approach 2: Python (Pandas)

In Pandas, we can replicate the SQL left join using `pd.merge()` and filter out customers who have not placed any orders using `.isna()`.

---

## Code
- [SQL Solution](./solution_1.sql)
- [Python Solution (Using Pandas)](./solution_2.py)

## Complexity Analysis

### SQL Solution:
- **Time Complexity**: O(n), where `n` is the number of customers.
- **Space Complexity**: O(n), for storing the result set of customers who never placed orders.

### Python (Pandas) Solution:
- **Time Complexity**: O(n), where `n` is the number of customers.
- **Space Complexity**: O(n), due to the memory taken by the joined DataFrame.
