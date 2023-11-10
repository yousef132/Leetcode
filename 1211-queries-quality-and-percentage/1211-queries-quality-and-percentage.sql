/* Write your T-SQL query statement below */
select query_name  , round(sum(((rating*1.0)/position) )/count(result),2) as quality
,  round((sum(
        case
            when rating<3 then 1
            else 0
        end 
    )*1.0)*100/count(result),2) as poor_query_percentage
from Queries
group by query_name
