--
-- @lc app=leetcode id=262 lang=mysql
--
-- [262] Trips and Users
--

-- @lc code=start
# Write your MySQL query statement below

SELECT request_at AS Day, 
    ROUND(SUM(IF(status != 'completed', 1, 0)) / COUNT(*), 2) AS 'Cancellation Rate'
FROM Trips
WHERE request_at BETWEEN '2013-10-01' AND '2013-10-03'
    AND client_id IN (
        SELECT users_id
        FROM Users
        WHERE banned = 'No'
    )
    AND driver_id IN (
        SELECT users_id
        FROM Users
        WHERE banned = 'No'
    )
GROUP BY request_at

-- @lc code=end

