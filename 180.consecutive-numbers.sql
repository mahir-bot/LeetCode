--
-- @lc app=leetcode id=180 lang=mysql
--
-- [180] Consecutive Numbers
--

-- @lc code=start
# Write your MySQL query statement below
SELECT DISTINCT l1.Num AS ConsecutiveNums 
FROM Logs l1, Logs l2, Logs l3
WHERE l1.Num = l2.Num AND l2.Num = l3.Num AND l1.Id = l2.Id - 1 AND l2.Id = l3.Id - 1

-- @lc code=end

