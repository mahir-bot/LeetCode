/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    vector<int> ans;

    void go(TreeNode *root)
    {
        if (root == nullptr)
            return;

        ans.push_back(root->val);
        go(root->left);
        go(root->right);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        go(root);
        return ans;
    }
};
// @lc code=end
