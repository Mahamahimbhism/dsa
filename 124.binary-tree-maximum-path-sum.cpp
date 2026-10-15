/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=-1e9;
    int bestSum(TreeNode* node) {
        if(!node) return 0;
        int lc = bestSum(node->left);
        int rc = bestSum(node->right);
        int cur = node->val;
        int curmax = max({cur, cur+lc, cur+rc});
        ans = max({ans, curmax, cur+lc+rc});
        return curmax;
    }
    int maxPathSum(TreeNode* root) {
        bestSum(root);
        return ans;
    }
};
// @lc code=end

