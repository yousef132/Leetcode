 select customer_id from Customer group by customer_id having
  COUNT(DISTINCT product_key) = (select count(*) from Product )