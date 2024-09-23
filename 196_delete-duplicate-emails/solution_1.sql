-- create Person table
CREATE TABLE Person (
    id INT PRIMARY KEY,
    email VARCHAR(255)
);

-- insert sample data
INSERT INTO 
    Person (id, email) 
VALUES 
    (1, 'john@example.com'),
    (2, 'bob@example.com'),
    (3, 'john@example.com');

-- query to delete duplicate emails
DELETE 
    p1
FROM 
    Person p1
JOIN 
    Person p2
ON 
    p1.email = p2.email
WHERE 
    p1.id > p2.id;
