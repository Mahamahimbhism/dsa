/*
 * @lc app=leetcode id=834 lang=cpp
 *
 * [834] Sum of Distances in Tree
 */

// @lc code=start
class Solution {
public:
    vector<int> inDp, outDp, sz;
    vector<vector<int>> g;
    int nn;

    void inDfs(int node, int par) {
        inDp[node] = 0;
        sz[node] = 1;
        for(auto v: g[node]) {
            if(v!=par){
                inDfs(v, node);
                sz[node] += sz[v];
                inDp[node] += inDp[v]+sz[v];
            }
        }
    }

    void outDfs(int node, int par) {
        if(par!=-1)
        outDp[node] = outDp[par] + inDp[par] - inDp[node] - sz[node] + nn - sz[node];
        for(auto v: g[node]) {
            if(v!=par) {
                outDfs(v, node);
            }
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        nn=n;
        g.resize(n);
        inDp.assign(n, 0);
        outDp.assign(n, 0);
        sz.assign(n, 0);
        for(int i=0; i<edges.size(); i++) {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> ans(n);
        inDfs(0, -1);
        outDfs(0, -1);
        for(int i=0; i<n; i++) {
            ans[i] = inDp[i]+outDp[i];
        }
        return ans;
    }
};
// @lc code=end

