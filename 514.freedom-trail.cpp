/*
 * @lc app=leetcode id=514 lang=cpp
 *
 * [514] Freedom Trail
 */

// @lc code=start
class Solution {
public:
    int dp[101][101];
    string a,b;
    int rec(int i, int pos) {
        if(i==b.size()) return 0;
        if(dp[i][pos]!=-1) return dp[i][pos];
        int ans = 1e9;
        //we are already at the character
        if(a[pos]==b[i]) 
        ans = min(ans, 1+rec(i+1, pos));
        //2 directions to move, calculate the steps required for each
        int s1=0, pos1=-1, pos2=-1, s2=0, n=a.size();
        for(int j=pos+1; ; j++) {
            if(j==n) j=0;
            s1++; if(a[j]==b[i]) {
                pos1=j;
                break;
            }
            if(s1>2*n-2) break;
        }
        if(pos1!=-1) ans = min(ans, s1+1+rec(i+1, pos1));
        for(int j=pos-1; ; j--) {
            if(j==-1) j=n-1;
            s2++; if(a[j]==b[i]) {
                pos2=j;
                break;
            }
            if(s2>2*n-2) break;
        }
        if(pos2!=-1) ans = min(ans, s2+1+rec(i+1, pos2));
        return dp[i][pos] = ans;
    }

    int findRotateSteps(string ring, string key) {
        a=ring; b=key;
        memset(dp, -1, sizeof(dp));
        return rec(0, 0);
    }
};
// @lc code=end

