/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    unordered_map<int, int> m;
    bool findTarget(TreeNode *root, int k)
    {
        if (!root)
            return false;

        int now = k - root->val;
        if (m[now])
            return true;
        m[root->val]++;
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};
// @lc code=end
