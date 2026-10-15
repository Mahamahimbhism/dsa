/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int n = a.size();
        for(int i=0; i<n; i++) {
            while(a[i]>0 && a[i]-1 < n && a[i] != a[a[i]-1]) {
                int pos = a[i] - 1;
                int temp = a[pos];
                a[pos] = a[i]; 
                a[i] = temp;
            }
        }
        for(int i=0; i<n; i++) {
            if(a[i]!=i+1)
            return i+1;
        }
        return n+1;
    }
};
// @lc code=end

