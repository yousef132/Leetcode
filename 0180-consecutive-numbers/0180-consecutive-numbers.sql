select distinct l1.num as ConsecutiveNums  from 
Logs l1 inner join Logs l2 on l1.id=l2.id-1 and l1.num=l2.num
inner join Logs l3 on l3.num=l2.num and l2.id=l3.id-1
