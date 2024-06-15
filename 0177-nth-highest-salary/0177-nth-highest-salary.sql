	create FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
	BEGIN
		RETURN (
			/* Write your T-SQL query statement below. */
				 select top 1 salary from(select Salary, DENSE_RANK () over (order by salary desc) as rn			
				 from Employee) as newtable		
				 where rn = @N

   

		);
	END