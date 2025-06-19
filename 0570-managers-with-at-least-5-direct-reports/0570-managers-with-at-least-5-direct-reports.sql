# Write your MySQL query statement below
select e1.name
from employee e1
inner join employee e2
on e1.id=e2.managerID
group by e2.managerID
having count(e2.managerID)>=5;

/* we can solve by subquery as well*/




/*select *
WHERE (count(managerID)>=5)
from Employee 
GROUP BY id;*/