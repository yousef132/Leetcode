;WITH CTE AS (
		SELECT
			*,
			Dense_rank() OVER(ORDER BY visited_on) KeyID
		FROM
			Customer
		)
SELECT DISTINCT
	T1.visited_on,
	Sub.Total amount,
	ROUND(Sub.Total / 7.0,2) average_amount
FROM
	CTE T1
OUTER APPLY
	(
		SELECT
			SUM(T2.amount) Total
		FROM
			Customer T2
		WHERE
			visited_on BETWEEN DATEADD(DAY,-6, T1.visited_on) AND T1.visited_on  
	)Sub
WHERE 
	KeyID >= 7