/*
 * @lc app=leetcode id=2331 lang=cpp
 *
 * [2331] Evaluate Boolean Binary Tree
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
    bool evaluateTree(TreeNode *root)
    {

        if (root->val == 0 || root->val == 1)
            return root->val;

        bool ans;
        if (root->val == 2)
        {
            ans = evaluateTree(root->left) or (evaluateTree(root->right));
        }
        else
        {
            ans = evaluateTree(root->left) and (evaluateTree(root->right));
        }

        return ans;
    }
};
// @lc code=end
