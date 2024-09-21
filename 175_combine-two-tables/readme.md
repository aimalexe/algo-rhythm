# Problem 175: Combine Two Tables

**Problem Link**: [LeetCode Problem 175](https://leetcode.com/problems/combine-two-tables/)

**Difficulty Level**: Easy

**Key Concepts/Tags**: SQL, Join, Left Join, Pandas, DataFrame

## Problem Statement

You are given two tables: `Person` and `Address`. Write a solution to report the `firstName`, `lastName`, `city`, and `state` of each person in the `Person` table. If the address of a `personId` is not present in the `Address` table, report `null` instead.

The result table should be returned in any order.

### Table Schema:

#### Person Table:
| Column Name | Type    |  
|-------------|---------|  
| personId    | int     |  
| lastName    | varchar |  
| firstName   | varchar |  

`personId` is the primary key for this table. This table contains information about the ID, first name, and last name of some persons.

#### Address Table:
| Column Name | Type    |  
|-------------|---------|  
| addressId   | int     |  
| personId    | int     |  
| city        | varchar |  
| state       | varchar |  

`addressId` is the primary key for this table. This table contains information about the city and state of a person with ID `= personId`.

### Example 1:

**Input**:

Person table:
| personId | lastName | firstName |
|----------|----------|-----------|
| 1        | Wang     | Allen     |
| 2        | Alice    | Bob       |


Address table:

| addressId | personId | city         | state      |
|-----------|----------|--------------|------------|
| 1         | 2        | New York City| New York   |
| 2         | 3        | Leetcode     | California |


**Output**:

| firstName | lastName | city         | state      |
|-----------|----------|--------------|------------|
| Allen     | Wang     | null         | null       |
| Bob       | Alice    | New York City| New York   |

**Explanation**:
- There is no address for `personId = 1` in the `Address` table, so we return `null` for city and state.
- `personId = 2` has an address in the `Address` table, so we return the corresponding `city` and `state`.

### Constraints:
- `personId` is a primary key in both tables.
- The length of `firstName`, `lastName`, `city`, and `state` does not exceed 100 characters.
- You can assume that `Address.personId` contains unique values.

---

## Solution Explanation

The problem requires combining two tables based on a common key (`personId`), and reporting information even if some values from the `Address` table are missing. This can be done using a **LEFT JOIN**, which ensures that all rows from the `Person` table are included, and if there is no match in the `Address` table, `NULL` is returned for missing fields.

### Approach 1: MySQL (SQL)

We perform a **LEFT JOIN** between the `Person` and `Address` tables on the `personId`. This ensures that all rows from the `Person` table are included, even if no matching row exists in the `Address` table.

### Approach 2: Python (Pandas)

We use **Pandas** to achieve the same functionality. We create two DataFrames, one for the `Person` table and one for the `Address` table, and then perform a **left join** using the `pd.merge()` function based on the `personId`.

---

## Code

- [MySQL Solution](./solution_1.sql)
- [Python (Pandas) Solution](./solution_2.py)

## Complexity Analysis

### MySQL Solution:
- **Time Complexity**: O(n), where `n` is the number of rows in the `Person` table.
- **Space Complexity**: O(n), for storing the result.

### Python (Pandas) Solution:
- **Time Complexity**: O(n), where `n` is the number of rows in the `Person` and `Address` DataFrames.
- **Space Complexity**: O(n), due to the space required to store the merged DataFrame.
