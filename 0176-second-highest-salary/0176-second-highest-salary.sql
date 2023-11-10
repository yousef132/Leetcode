SELECT
  CASE WHEN EXISTS (
    SELECT 1
    FROM (
      SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS rn
      FROM Employee
    ) AS newtable
    WHERE rn = 2
  ) THEN
    (SELECT TOP 1 SecondHighestSalary FROM (
      SELECT salary AS SecondHighestSalary, DENSE_RANK() OVER (ORDER BY salary DESC) AS rn
      FROM Employee
    ) AS newtable
    WHERE rn = 2)
  ELSE
    NULL
  END AS SecondHighestSalary;
