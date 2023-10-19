select  s.student_id,s.student_name,sb.subject_name,count(e.subject_name)  as attended_exams  from Students s
cross join subjects sb
left  join Examinations   e on e.student_id=s.student_id and sb.subject_name=e.subject_name
group by sb.subject_name,s.student_id,s.student_name order by s.student_id,s.student_name