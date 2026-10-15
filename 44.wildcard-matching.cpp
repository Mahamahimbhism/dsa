/*
 * @lc app=leetcode id=44 lang=cpp
 *
 * [44] Wildcard Matching
 */

// @lc code=start
class Solution {
public:

    int dp[2002][2002];
    int n, m;
    string s,p;
    //s = saabcx
    //p = ?*x
    int rec(int i, int j) {
        if(i==n){
            if(j==m)
            return 1;
            for(int k=j; k<m;k++) {
                if(p[k]!='*')
                   return 0;
            }
            return 1;
        } 
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        //if same character then both would move forward by 1
        if(s[i]==p[j]) {
            ans |= rec(i+1, j+1);
        }
        else {
            if(p[j]=='?')
            ans |= rec(i+1, j+1);
            if(p[j]=='*') {
                ans = rec(i+1, j) | rec(i, j+1); 
            }  
        } 
        return dp[i][j]=ans;
    }

    bool isMatch(string s1, string p1) {
        s=s1; p=p1;
        n=s.length(); m=p.length();
        memset(dp, -1, sizeof(dp));
        return rec(0, 0);
    }
};
// @lc code=end

