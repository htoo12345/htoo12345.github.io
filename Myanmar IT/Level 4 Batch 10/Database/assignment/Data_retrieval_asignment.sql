   /*data retrieval assignment 1*/

/*No.1 Assignment*/
SELECT Onum,Amt,Odate
FROM orders;

/*No.2 Assignment*/
SELECT * FROM customers WHERE Snum=1001;

/*No.3 Assignmet*/
SELECT city,Sname,Snum,Comm
FROM salespeople;

/*No.4 Assignment*/
 SELECT * FROM customers ORDER BY Cname;
 
/*No.5 Assignment*/
SELECT * FROM orders WHERE Odate BETWEEN '1990-10-04' AND '1990-10-08';

/*No.6 Assignment*/
SELECT Sname,City
FROM salespeople WHERE City = 'London' AND Comm>.10;

/*No.7 Assignment*/
SELECT * FROM customers WHERE Cname LIKE 'C%';

/*No.8 Assignment*/
SELECT * FROM customers WHERE Snum = 1001 OR Snum = 1002 OR Snum = 1007;

/*No.9 Assignment*/
SELECT * FROM salespeople WHERE Comm != .10 AND Comm != .13 AND Comm != .15;

/*No.10 Assignment*/
SELECT DISTINCT City FROM customers ;

/*No.11 Assignment*/
SELECT * FROM customers LIMIT 3;

/*No.12 Assignment*/
SELECT * FROM salespeople WHERE City = 'Rome';
