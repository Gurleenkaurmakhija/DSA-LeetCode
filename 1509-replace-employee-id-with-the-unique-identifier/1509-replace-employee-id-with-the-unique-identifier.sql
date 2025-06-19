# Write your MySQL query statement below
SELECT unique_id,name from EmployeeUNI u RIGHT JOIN Employees e
ON u.id=e.id;