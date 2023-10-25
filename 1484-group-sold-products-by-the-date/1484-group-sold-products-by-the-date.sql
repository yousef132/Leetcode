SELECT
	sell_date,
	COUNT(product) num_sold,
	STRING_AGG(product,',') WITHIN GROUP(ORDER BY product ) products 
FROM
    (

        SELECT
            DISTINCT
            sell_date,
            product
        FROM
            Activities
    )TBL
	
GROUP BY
	sell_date