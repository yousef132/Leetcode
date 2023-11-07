select p.product_id  , p.new_price as price 
from Products p
where change_date = 
(select top 1 change_date from Products where product_id =p.product_id and change_date <= '2019-08-16'
order by change_date desc ) 

union 
SELECT product_id, 10 as price
FROM products p1
WHERE NOT EXISTS (
    SELECT 1
    FROM products p2
    WHERE p1.product_id = p2.product_id
      AND p2.change_date <= '2019-08-16'
);