select x,y,z ,

CASE
WHEN (x+y > z) and (y+z > x) and (z+x > y)  THEN 'Yes' 
	else 'No' 
END
as 'triangle'
from Triangle