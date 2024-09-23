-- create Weather table
CREATE TABLE Weather (
    id INT PRIMARY KEY,
    recordDate DATE,
    temperature INT
);

-- insert data into the table
INSERT INTO 
    Weather (id, recordDate, temperature) 
VALUES 
    (1, '2015-01-01', 10),
    (2, '2015-01-02', 25),
    (3, '2015-01-03', 20),
    (4, '2015-01-04', 30);

-- query to find rising temperature
SELECT 
    w1.id
FROM 
    Weather w1
JOIN 
    Weather w2
ON DATE
    (w1.recordDate) = DATE(w2.recordDate) + INTERVAL 1 DAY
WHERE 
    w1.temperature > w2.temperature;
