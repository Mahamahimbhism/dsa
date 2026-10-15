/*
 * @lc app=leetcode id=664 lang=cpp
 *
 * [664] Strange Printer
 */

// @lc code=start
class Solution {
public:
    string a;
    int dp[101][101];
    int rec(int l, int r) {
        if(r<l) return 1e9;
        while(l<r && a[l]==a[l+1]){
            ++l;
        }
        if(l==r) return 1;
        if(dp[l][r]!=-1) return dp[l][r];
        int ans = 1e9;
        ans = min(ans, 1+rec(l+1, r));
        for(int i=l+1; i<=r; i++) {
            if(a[i]==a[l])
            ans = min(ans, rec(i, r)+rec(l+1, i-1));
        }
        return dp[l][r]=ans;
    }
    int strangePrinter(string s) {
        memset(dp, -1, sizeof(dp));
        a=s;
        return rec(0, a.size()-1);
    }
};
// @lc code=end