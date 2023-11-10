select p.product_id , isnull(round(sum(units*price)/sum(cast (units as float))  ,2),0) as average_price 

from 
Prices p left   join UnitsSold u
on u.product_id =p.product_id and u.purchase_date between p.start_date  and  p.end_date
group by p.product_id


