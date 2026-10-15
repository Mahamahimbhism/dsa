/*
 * @lc app=leetcode id=85 lang=cpp
 *
 * [85] Maximal Rectangle
 */

// @lc code=start
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

    int maximalRectangle(vector<vector<char>>& a) {
        int n = a.size(), m = a[0].size();
        vector<int> temp(m, 0);
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(a[i][j]=='0') {
                    temp[j]=0;
                }
                else {
                    temp[j]++;
                }
            }
            ans = max(ans, largestRectangleArea(temp));
        }
        return ans;
    }
};
// @lc code=end

