select 
LEFT(trans_date, '7') month,
country ,
count(id) as trans_count ,
SUM(CASE WHEN state = 'approved' THEN 1 ELSE 0 END) AS approved_count,
sum(amount) as trans_total_amount  ,
sum(case when state ='approved' then amount  else 0 end) as approved_total_amount  

from Transactions
group by LEFT(trans_date, '7'), country