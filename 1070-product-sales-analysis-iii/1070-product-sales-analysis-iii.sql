SELECT new_table.product_id, year as first_year , quantity, price
FROM (
    SELECT p.product_id AS product_id, s.year, s.quantity, s.price, DENSE_RANK() OVER (PARTITION BY p.product_id ORDER BY s.year) AS rn
    FROM Product p
    JOIN Sales s ON s.product_id = p.product_id
) AS new_table
WHERE rn = 1;