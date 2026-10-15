/*
 * @lc app=leetcode id=68 lang=cpp
 *
 * [68] Text Justification
 */

// @lc code=start
class Solution {
public:
    vector<string> fullJustify(vector<string>& w, int maxWidth) {
        int noOfWords = 0, curSz = 0;
        vector<string> temp;
        vector<pair<vector<string>, int>> a;
        for(int i=0; i<w.size(); i++) {
            int sz = w[i].size();
            if(curSz + max(0, noOfWords-1) + sz + 1 <= maxWidth) {
                temp.push_back(w[i]);
                curSz+=sz;
                noOfWords++;
            }
            else{
                if(temp.size())
                a.push_back({temp, maxWidth - curSz});
                temp.clear();
                curSz = sz;
                noOfWords = 1;
                temp.push_back(w[i]);
            }
        }
        if(temp.size())
        a.push_back({temp, maxWidth - curSz});
        
        vector<string> ans;

        for(int k=0; k<a.size(); k++) {
            auto v = a[k];
            int nos = v.second;
            auto lineWords = v.first;
            int n = lineWords.size();
            //left justification for last line
            if(k == a.size()-1) {
                string st = "";
                for(int i=0; i<n; i++) {
                    st += lineWords[i] + " ";
                }
                if(st.size()>maxWidth) st.pop_back();
                while(st.size()<=maxWidth-1)
                    st+=" ";
                ans.push_back(st);
                break;
            }
            int s1=0, s2=0;
            s1 = nos / max(1, n - 1); //regular spaces
            s2 = nos % max(1, n - 1); //extra spaces
            string space = "";
            cout<<s1<<endl;
            while(s1--) {
                space += " ";
            }
            string str = "";
            if(n==1) {
                ans.push_back(lineWords[0]+space);
                continue;
            }
            for(int i=0; i<n; i++) {
                str += lineWords[i];
                if(i<n-1) str += space;
                if(i<n-1 && s2) {
                    str += " ";
                    --s2;
                }
            }
            ans.push_back(str);
        }
        return ans;
    }
};
// @lc code=end

