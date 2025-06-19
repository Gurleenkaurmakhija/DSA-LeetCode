# Write your MySQL query statement below
/* if there would have been entry 5 2025-02-06 then previous row with id 4 was ot previous DAY it was row, we need to conisder previous row
-->here inner and self join is same 
-->datediff*/
select w1.id 
from Weather w1
INNER JOIN weather w2

on datediff(w1.recordDate,w2.recordDate)=1
AND w1.temperature>w2.temperature;