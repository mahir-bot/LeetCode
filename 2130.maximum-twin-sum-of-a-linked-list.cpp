/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int pairSum(ListNode *head)
    {

        int cnt = 0;
        ListNode *tmp = head;
        deque<int> d;
        int ans = 0;

        while (tmp)
        {
            d.push_back(tmp->val);
            tmp = tmp->next;
        }
       
       while(d.size() > 0)
       {
           ans = max(ans, d.front() + d.back());
           d.pop_front();
           d.pop_back();
       }
        return ans;
    }
};
// @lc code=end
