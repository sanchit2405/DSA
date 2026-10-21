# Write your MySQL query statement below
Select 
CASE
    WHEN id%2 != 0 AND id != (Select MAX(id) FROM Seat) THEN id+1
    WHEN id%2 = 0 THEN id-1
    WHEN id%2 != 0 AND id = (SELECT MAX(id) FROM Seat) THEN id
END AS id, student
FROM Seat
ORDER BY id;