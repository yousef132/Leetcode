select u.user_id as buyer_id ,  u.join_date ,coalesce(count(o.order_id),0) as orders_in_2019 
from Users u left outer join Orders o 
on u.user_id = o.buyer_id and o.order_date between '2019-01-01' AND '2019-12-31'
group by u.user_id , u.join_date
order BY u.user_id
