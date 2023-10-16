select x.employee_id , x.name , count(x.employee_id) as reports_count , round(avg(y.age *1.00),0) AS average_age 
from Employees x join Employees y  on x.employee_id = y.reports_to
group by x.employee_id ,x.name
order by x.employee_id