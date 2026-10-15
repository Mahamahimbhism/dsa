/*
 * @lc app=leetcode id=282 lang=cpp
 *
 * [282] Expression Add Operators
 */

// @lc code=start

using ll = __int128;

class Solution {
public:
    vector<string> ans;
    int n, target;
    string num;

    vector<char> operators = {'+', '-', '*'};

    void rec(int idx, ll total, ll last, string &temp) {
        if(idx == n){
            if(total == (ll)target) ans.push_back(temp);
            return;
        }
        //place an operator at idx
        //choose the substring where the current number ends
        for(int i=idx; i<n; i++) {
            if(i>idx&&num[idx]=='0') break;
            string str = num.substr(idx, i-idx+1);
            ll val = stoll(str);
            if(idx == 0) {
                rec(i+1, val, val, str);
            }
            else{
                for(int j=0; j<3; j++) {
                    ll curtotal;
                    if(operators[j]=='*') {
                        curtotal = total - last + last * val;
                        string curtemp = temp + operators[j]+str;
                        rec(i+1, curtotal, last*val, curtemp);
                    }
                    else if(operators[j]=='-') {
                        curtotal = total - val;
                        string curtemp = temp + operators[j]+str;
                        rec(i+1, curtotal, -val, curtemp);
                    }
                    else {
                        curtotal = total + val;
                        string curtemp = temp + operators[j]+str;
                        rec(i+1, curtotal, val, curtemp);
                    }
                }
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        this->num = num;
        this->target = target;
        n = num.size();
        string temp = "";
        rec(0, 0, 0, temp);
        return ans;
    }   
};
// @lc code=end

