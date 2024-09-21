-- Create the Employee table
CREATE TABLE Employee (
    id INT PRIMARY KEY,
    name VARCHAR(100),
    salary INT,
    managerId INT
);

-- Insert data into Employee table
INSERT INTO Employee (id, name, salary, managerId) VALUES
(1, 'Joe', 70000, 3),
(2, 'Henry', 80000, 4),
(3, 'Sam', 60000, NULL),
(4, 'Max', 90000, NULL);


SELECT 
    e.name AS Employee
FROM 
    Employee e
JOIN 
    Employee m 
ON 
    e.managerId = m.id
WHERE 
    e.salary > m.salary;
