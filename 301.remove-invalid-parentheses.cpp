/*
 * @lc app=leetcode id=301 lang=cpp
 *
 * [301] Remove Invalid Parentheses
 */

// @lc code=start
class Solution {
public:
    unordered_map <char, int> val;
    set<string> ans;
    int n;
    string s, curS = "";

    void dfs(int i, int openBrackets, int removalsLeft) {
        if(removalsLeft<0 || (n-i<removalsLeft)) return;
        if(i == n) {
            if(openBrackets==0 && removalsLeft==0)
            ans.insert(curS);
            return;
        }
        bool f = 0;
        curS.push_back(s[i]);
        //if its a character, always take it
        if(!val.count(s[i]))
        dfs(i+1, openBrackets, removalsLeft);
        else {
            //take the bracket if openBrackets >= 0
            if(openBrackets + val[s[i]] >= 0)
            dfs(i+1, openBrackets + val[s[i]], removalsLeft);
            f=1; curS.pop_back();
            //don't take
            dfs(i+1, openBrackets, removalsLeft-1);
        }
        if(!f) curS.pop_back();
    }

    vector<string> removeInvalidParentheses(string s) {
        val['('] = 1;
        val[')'] = -1;
        this->s = s;
        n = s.size();
        //calculate min removals first
        int cur = 0, carry = 0;
        for(char c: s) {
            if(!val.count(c)) continue;
            if(cur<0 && val[c]>0) {
                carry += abs(cur);
                cur = 1;
            }
            else {
                cur += val[c];
            }
        }
        int minRemovals = abs(cur) + carry;
        dfs(0, 0, minRemovals);

        return vector<string> (ans.begin(), ans.end());
    }
};
// @lc code=end

