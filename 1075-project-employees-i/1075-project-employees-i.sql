select project_id ,ROUND(AVG(CAST(experience_years aS DECIMAL(10,2))) ,2) AS average_years from
Project p join Employee e on p.employee_id=e.employee_id
group by project_id