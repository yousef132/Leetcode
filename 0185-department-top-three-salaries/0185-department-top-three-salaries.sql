select Department  , Employee , Salary from
(
select d.name as Department  , e.name as Employee, Salary,
dense_rank() over (partition by d.id order by salary desc) as dr
from 
Employee e join Department d on e.departmentId = d.id
) as newtable
where dr <=3