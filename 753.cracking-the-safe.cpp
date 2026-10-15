/*
    for n=4, k=2
    0001 is an edge, or the current password being considered and we want to visit it only once
    start with 000, keep appending possible k's, and whenever we get an already visited edge, skip it
*/

class Solution {
public:
    unordered_map<string, bool> vis;
    string ans="";
    void dfs(string node, int n, int k) {
        for(int i=0; i<k; i++) {
            string edge = node + to_string(i);
            if(!vis.count(edge)){
                vis[edge]=1;
                dfs(edge.substr(1), n, k);
                ans+=to_string(i);
            }
        }
    }

    string crackSafe(int n, int k) {
        string node = "";
        for(int i=0;i<n-1; i++)
            node+='0';
        dfs(node, n, k);
        return ans+node;
    }
};