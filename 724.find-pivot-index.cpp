/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(),0);
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (left == sum-(nums[i]+left)) {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};
// @lc code=end

