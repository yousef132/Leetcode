with cte as(
select new_salary , count(account_id) 'accounts_count'from
(select
case 
when income >50000 then 'High Salary'
when income <20000 then 'Low Salary'
else 'Average Salary'
end as new_salary ,account_id
from accounts)as result
group by new_salary
)
, 
category_Temp_Table as(
  select 'High Salary' as category union
select 'Low Salary' as category union
select 'Average Salary' as category
)
select ct.category, isnull(accounts_count,0)'accounts_count'
from 
category_Temp_Table ct
left join CTE
on ct.category = cte.new_salary

