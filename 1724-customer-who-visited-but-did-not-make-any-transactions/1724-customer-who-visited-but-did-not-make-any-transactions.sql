# Write your MySQL query statement below
/* we willuse *count aggregate function therefore group by clause will be used and where */
select v.customer_id,count(customer_id)
AS count_no_trans
from Visits v 
LEFT JOIN Transactions t
ON v.visit_id=t.visit_id
WHERE t.transaction_id is NULL
group by v.customer_id;
