with cte as (
select sum
(
case
when RN =1 and order_date=customer_pref_delivery_date then 1
else 0
end
) as tmp
from
(
select *,
ROW_NUMBER() over(partition by customer_id order by order_date) as RN
from Delivery
)as newtable
)
,
cte2 as(
select count( distinct  customer_id ) as newtmp
from Delivery)


select ROUND(((select tmp from cte)*1.0/(select newtmp from cte2) )*100.0,2) as immediate_percentage 


