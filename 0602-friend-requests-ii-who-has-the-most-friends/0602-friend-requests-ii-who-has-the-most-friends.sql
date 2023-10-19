	WITH RequesterCounts AS (
		SELECT requester_id, COUNT(accept_date) AS requester_count
		FROM RequestAccepted
		GROUP BY requester_id
	),
	AccepterCounts AS (
		SELECT accepter_id, COUNT(requester_id) AS accepter_count
		FROM RequestAccepted
		GROUP BY accepter_id
	)
	SELECT top 1
	case 
	when r.requester_id is null then a.accepter_id
	else r.requester_id
	end as id
	, isnull(r.requester_count,0)+ isnull(a.accepter_count,0) as num
	FROM RequesterCounts r
	FULL OUTER JOIN AccepterCounts a
	ON r.requester_id = a.accepter_id   
	order by num desc