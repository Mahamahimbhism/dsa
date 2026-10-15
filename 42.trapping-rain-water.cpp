/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:

    int trap(vector<int>& a) {
        stack<int> st;
        int n=a.size(), ans=0;
        for(int i=0; i<n; i++) {
            while(st.size() && a[st.top()]<a[i]) {
                int top = st.top();
                st.pop();

                if(st.empty()) break;

                int left_idx = st.top();
                int w = i - left_idx - 1;
                int h = min(a[i], a[left_idx]) - a[top];
                ans += h*w;
            }
            st.push(i);
        }
        return ans;
    }
};
// @lc code=end

