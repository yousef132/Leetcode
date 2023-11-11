select id,
case 
when id%2=0 then LAG(student)over(order by id) 
else isnull(lead(student)over(order by id),student)
end as student
from seat