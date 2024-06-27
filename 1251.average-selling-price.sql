--
-- @lc app=leetcode id=1251 lang=mysql
--
-- [1251] Average Selling Price
--

-- @lc code=start
# Write your MySQL query statement below

SELECT  p.product_id,
    IFNULL (ROUND(SUM(price * units) / SUM(units), 2),0) AS average_price
FROM Prices p LEFT JOIN UnitsSold u ON p.product_id = u.product_id
        AND u.purchase_date BETWEEN start_date AND end_date
    GROUP BY product_id



-- @lc code=end

