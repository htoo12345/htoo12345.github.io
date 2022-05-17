--Assignment 1
CREATE DATABASE libraryDB;

CREATE TABLE employee(
employee_id INT PRIMARY KEY,
name VARCHAR(25) NOT NULL,
email VARCHAR(25) UNIQUE NOT NULL,
location VARCHAR(25) NOT NULL,
birthday DATE NOT NULL,
nrcNO VARCHAR(25) UNIQUE NOT NULL,
age	INT,
gender BIT,
phoneNo INT UNIQUE NOT NULL
);

--Assignment 2
CREATE DATABASE shopDB;

CREATE TABLE salesPeople(
Snum INT,
Sname VARCHAR(50),
City VARCHAR(50),
Comm DECIMAL(3,2),
);


CREATE TABLE customers(
Cnum INT,
Cname VARCHAR(50),
City VARCHAR(50),
Rating INT,
Snum INT
);


CREATE TABLE orders(
Onum INT,
Amt DECIMAL(7,2),
Odate DATE,
Cnum INT,
Snum INT
);