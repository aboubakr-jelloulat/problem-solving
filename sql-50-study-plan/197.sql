
-- Topic : Self join +++ 


SELECT W1.id FROM Weather W1  JOIN Weather W2

ON W2.recordDate = DATEADD(day, -1, W1.recordDate)
WHERE W1.temperature > W2.temperature; 