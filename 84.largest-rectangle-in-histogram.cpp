/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
//calculate nse and pse - find max rectangle area
class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        stack <int> st;
        int n = a.size();
        vector<int> nse(n, n), pse(n, -1);
        //next smaller element
        for(int i=n-1; i>=0; i--) {
            while(st.size() && a[st.top()]>=a[i])
            st.pop();
            if(st.size()) nse[i] = st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=0; i<n; i++) {
            while(st.size() && a[st.top()]>=a[i])
            st.pop();
            if(st.size()) pse[i] = st.top();
            st.push(i);
        }
        int maxarea = 0;
        for(int i=0; i<n; i++){
            maxarea = max(maxarea, a[i]*(nse[i]-pse[i]-1));
        }
        return maxarea;
    }
};
// @lc code=end

