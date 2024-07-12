select TableWithRanking.Department ,TableWithRanking.Employee, TableWithRanking.salary from (select d.name as Department , e.name as Employee, e.salary, DENSE_RANK() over ( partition by d.id order by e.salary desc) as DR
from Employee e join Department d
on e.departmentId = d.id) as TableWithRanking
where TableWithRanking.DR =1