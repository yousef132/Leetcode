select ROUND(SUM(a.tiv_2016), 2) as tiv_2016  
from Insurance a  
where not exists 
(
 select * from Insurance b  where b.pid !=a.pid  AND a.lat = b.lat AND a.lon = b.lon
) 
and tiv_2015 in 
(
select tiv_2015 from Insurance c where c.pid !=a.pid
)