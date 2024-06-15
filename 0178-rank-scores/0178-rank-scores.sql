select score , DENSE_RANK    () over (order by score desc) as RANK
from Scores