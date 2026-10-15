/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();

        // Ensure nums1 is the smaller array to simplify the logic
        if (n1 > n2) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int totalLength = n1 + n2;
        int partLength = (totalLength + 1) / 2;
        int lo = 0, hi = n1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int partLengthMid = partLength - mid;
            
            // Handle boundary cases with sentinel values
            int left1 = (mid == 0) ? INT_MIN : nums1[mid - 1];
            int right1 = (mid == n1) ? INT_MAX : nums1[mid];
            int left2 = (partLengthMid == 0) ? INT_MIN : nums2[partLengthMid - 1];
            int right2 = (partLengthMid == n2) ? INT_MAX : nums2[partLengthMid];
            
            if (left1 > right2) {
                hi = mid - 1;
            } else if (left2 > right1) {
                lo = mid + 1;
            } else {
                if (totalLength % 2 == 0) {
                    return (static_cast<double>(max(left1, left2)) + min(right1, right2)) / 2.0;
                } else {
                    return static_cast<double>(max(left1, left2));
                }
            }
        }

        return -1.0;
    }
};
// @lc code=end

