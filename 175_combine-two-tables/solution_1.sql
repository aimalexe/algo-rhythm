-- Create Person table
CREATE TABLE Person (
    personId INT PRIMARY KEY,
    lastName VARCHAR(50),
    firstName VARCHAR(50)
);

-- Create Address table
CREATE TABLE Address (
    addressId INT PRIMARY KEY,
    personId INT,
    city VARCHAR(100),
    state VARCHAR(100),
    FOREIGN KEY (personId) REFERENCES Person(personId)
);

-- Insert data into Person table
INSERT INTO Person (personId, lastName, firstName) VALUES
(1, 'Wang', 'Allen'),
(2, 'Alice', 'Bob');

-- Insert data into Address table
INSERT INTO Address (addressId, personId, city, state) VALUES
(1, 2, 'New York City', 'New York'),
(2, 3, 'Leetcode', 'California');



-- Combine the Person and Address tables with LEFT JOIN
SELECT 
    p.firstName, 
    p.lastName, 
    a.city, 
    a.state
FROM 
    Person p
LEFT JOIN
    Address a 
ON 
    p.personId = a.personId;
