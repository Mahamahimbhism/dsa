/*
 * @lc app=leetcode id=224 lang=cpp
 *
 * [224] Basic Calculator
 */

/*
    if space skip
    if + add, and if - subtract
    recursively solve ( -> find the respective ) and return the current expression

    (1+(4+5+2)-3)+(6+8)
    ( -> 

    rec(l, r) -> where l and r are the positions of parenthesis open and close

*/

// @lc code=start
class Solution {
public:
    int n; //size and parity
    string s;

    unordered_map<char, int> f;

    long long parseNumber(int &i) {
        long long ans=0;
        while(i<n && f.count(s[i])) {
            ans = ans*10 + (int)(s[i]-'0');
            ++i;
        }
        --i;
        return ans;
    }

    int rec(int &i) {
        int ans = 0;
        int p=1;
        while(i<n) {
            if(s[i]=='-') p=-1;
            else if (s[i]=='+') p=1;
            //if we find another '('
            else if(s[i]=='(')
                ans+= p*rec(++i);
            else if(f.count(s[i])) {
                ans+= p*parseNumber(i); 
            }
            else if(s[i]==')')
                return ans;
            ++i;    
        }
        return ans;
    }

    int calculate(string str) {
        s=str; int p=1;
        for(char ch = '0'; ch<='9'; ch++) f[ch]=1;
        n = s.length();
        int ans = 0;
        for(int i=0; i<n; i++) {
            if(s[i]=='-') p=-1;
            else if (s[i]=='+') p=1;
            else if(s[i]=='(') {
                ans+= p*rec(++i);
            }
            else if(f.count(s[i])) {
                ans+= p*parseNumber(i); 
            }
        }
        return ans;
    }
};
// @lc code=end

