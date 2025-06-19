# Write your MySQL query statement below
/*CROSS JOIN as each student should enroll in all 3 subject*/
select s.student_id,s.student_name,sb.subject_name,
count(e.subject_name)as attended_exams
FROM  Students s
CROSS JOIN Subjects sb
LEFT JOIN Examinations e
ON s.student_id=e.student_id
AND sb.subject_name=e.subject_name
GROUP BY s.student_id,sb.subject_name
ORDER BY s.student_id,sb.subject_name;