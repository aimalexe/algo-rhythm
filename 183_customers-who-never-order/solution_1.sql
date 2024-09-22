-- Create Customers table
CREATE TABLE Customers (
    id INT PRIMARY KEY,
    name VARCHAR(100)
);

-- Create Orders table
CREATE TABLE Orders (
    id INT PRIMARY KEY,
    customerId INT,
    FOREIGN KEY (customerId) REFERENCES Customers(id)
);

-- Insert data into Customers table
INSERT INTO Customers (id, name) VALUES
(1, 'Joe'),
(2, 'Henry'),
(3, 'Sam'),
(4, 'Max');

-- Insert data into Orders table
INSERT INTO Orders (id, customerId) VALUES
(1, 3),
(2, 1);

-- Query to find customers who never ordered
SELECT
    name AS Customers
FROM
    Customers c
LEFT JOIN
    Orders o 
ON
    c.id = o.customerId
WHERE
    o.id IS NULL;

-- or SELECT name as Customers FROM customers WHERE id NOT IN (SELECT DISTINCT customerId FROM orders);