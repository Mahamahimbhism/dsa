/*
 * @lc app=leetcode id=2488 lang=cpp
 *
 * [2488] Count Subarrays With Median K
 */

// @lc code=start
class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int kIdx = find(nums.begin(), nums.end(), k) - nums.begin();

        // Store balances of every possible start on the left of k.
        // A value greater than k contributes +1 and a value smaller than k -1.
        unordered_map<int, int> freq;
        int balance = 0;
        freq[0] = 1; // Start immediately at k.

        for (int i = kIdx - 1; i >= 0; --i) {
            balance += (nums[i] > k ? 1 : -1);
            ++freq[balance];
        }

        int ans = 0;
        balance = 0;

        // Scan right endpoints, including k. The total balance must be 0 or 1.
        for (int i = kIdx; i < n; ++i) {
            if (nums[i] > k) ++balance;
            else if (nums[i] < k) --balance;

            ans += freq[-balance] + freq[1 - balance];
        }

        return ans;
    }
};
// @lc code=end
