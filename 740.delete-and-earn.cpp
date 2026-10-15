/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution {
public:
    vector<pair<int, int>> a;
    vector<int> dp;

    int find(int val) {
        ++val;
        int lo=0, hi=a.size()-1, ans=hi+1;
        while(lo<=hi) {
            int mid = (lo+hi)/2;
            if(a[mid].first>val) {
                ans = mid;
                hi = mid-1;
            } else 
                lo = mid+1;
        }
        return ans;
    }

    int rec(int i) {
        if(i==a.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        //take the current element and jump to the next possible element
        int j = find(a[i].first);
        int ans = a[i].first*a[i].second + rec(j);
        ans = max(ans, rec(i+1));
        return dp[i] = ans;
    }

    int deleteAndEarn(vector<int>& nums) {
        map<int, int> mp;
        for(auto v: nums) mp[v]++;
        for(auto &[key, val]: mp) {
            a.push_back({key, val});
        }
        dp.assign(a.size()+1, -1);
        return rec(0);
    }
};
// @lc code=end

