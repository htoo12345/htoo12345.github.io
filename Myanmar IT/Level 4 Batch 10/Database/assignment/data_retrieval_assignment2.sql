            -- Data retrival assignment 
            -- Assignment 1
            
-- No.1 Assignment
SELECT MAX(salary) 'Maximum salary' FROM employee_crud;

-- No.2 Assignment
SELECT MIN(salary) 'Minimum salary' FROM employee_crud;

-- No.3 Assignment
SELECT COUNT(*) 'How many people' FROM employee_crud WHERE registerDate >= '2013-02-12';

-- No.4 Assignment
SELECT DISTINCT city FROM employee_crud;

-- No.5 Assignment
SELECT SUM(salary) FROM employee_crud;

-- No.6 Assignment
SELECT city,MAX(salary) FROM employee_crud GROUP BY city;
 
-- No.7 Assignment
SELECT department, AVG(salary) FROM employee_crud WHERE department = 'HR'; 

-- No.8 Assignment
SELECT department, MAX(salary), MIN(salary), AVG(salary) FROM employee_crud GROUP BY department;

-- No.9 Assignment
SELECT  salary, COUNT(*) FROM employee_crud GROUP BY salary;

-- No.10 Assignment
SELECT department, COUNT(*) FROM employee_crud GROUP BY department;

-- No.11 Assignment 
SELECT * FROM employee_crud WHERE empName LIKE '%hy%' ORDER BY empName ASC;

-- No.12 Assignment
SELECT salary FROM employee_crud  ORDER BY salary DESC LIMIT 3;

                         
                         -- Assignemt 2

-- No.1 Assignment
SELECT COUNT(Snum = 1001) FROM orders WHERE Amt > 1500;

-- No.2 Assignment
SELECT COUNT(*) FROM customers WHERE city = 'London';

-- No.3 Assignment
SELECT *,MIN(Amt) FROM orders;

-- No.4 Assignment
SELECT Odate, MAX(Amt) FROM orders GROUP BY Odate;

-- No.5 Assignment
SELECT rating, Cname, Cnum FROM customers ORDER BY rating DESC;

