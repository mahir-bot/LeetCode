/*
 * @lc app=leetcode id=933 lang=cpp
 *
 * [933] Number of Recent Calls
 */

// @lc code=start
class RecentCounter {
public:
    RecentCounter() {
        
    }
    queue<int> q;
    int ping(int t) {
        q.push(t);
        while (q.front() < t - 3000)    
            q.pop();
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
// @lc code=end

