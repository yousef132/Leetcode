/* Write your T-SQL query statement below */
WITH CTE AS (
    SELECT email, MIN(id) AS min_id
    FROM Person
    GROUP BY email
)

DELETE p
FROM Person p
LEFT JOIN CTE c
ON p.id = c.min_id
WHERE c.min_id IS NULL;

