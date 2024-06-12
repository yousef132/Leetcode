select U.name ,  
case when sum(R.distance) is null then 0 
else sum(R.distance) 
end  as travelled_distance 
from Users U left Join Rides R
on U.id = R.user_id
group by U.id , U.name
order by travelled_distance desc , name asc