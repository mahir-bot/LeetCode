/*
 * @lc app=leetcode id=1637 lang=cpp
 *
 * [1637] Widest Vertical Area Between Two Points Containing No Points
 */

// @lc code=start
class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        std::sort(points.begin(), points.end(), [](const auto &a, const auto &b)
                  { return a[0] < b[0]; });

        int max_width = 0;

        for (int i = 1; i < points.size(); ++i)
        {
            int width = points[i][0] - points[i - 1][0];
            max_width = std::max(max_width, width);
        }

        return max_width;
    }
};
// @lc code=end
