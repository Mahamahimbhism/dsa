/*
 * @lc app=leetcode id=685 lang=cpp
 *
 * [685] Redundant Connection II
 */

// @lc code=start

class DSU {
public:
    vector<int> par, sz;
    DSU (int n) {
        par.assign(n+1, -1);
        sz.assign(n+1, 1);
        for(int i=1; i<=n; i++)
        par[i] = i;
    }
    int find(int x) {
        if(par[x]==x) return x;
        return par[x] = find(par[x]);
    }
    void unite (int a, int b) {
        a = find(a);
        b = find(b);
        if(sz[a]>sz[b]) swap(a, b);
        par[a] = b;
        sz[b] += sz[a];
    }
};


class Solution {
public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DSU uf(n);
        vector<int> inDeg(n+1, 0);
        vector<int> susEdge;
        for(auto v: edges) {
            inDeg[v[1]]++;
            if(inDeg[v[1]] == 2) {
                susEdge = v; break;
            }
        }
        vector<int> ans;
        if(susEdge.empty()) {
            for(auto v: edges) {
                if(uf.find(v[0]) == uf.find(v[1])) {
                    ans = v;
                }else
                    uf.unite(v[0], v[1]);
            }
            return ans;
        }
        else {
            //check if any cycles exist if not using susEdge
            bool cycle = 0;
            for(auto v: edges) {
                if(v == susEdge) continue;
                if(uf.find(v[0]) == uf.find(v[1])) {
                    cycle = 1; break;
                }else
                    uf.unite(v[0], v[1]);
            }
            if(!cycle) return susEdge;
            else{
                for(auto v: edges) {
                    if(v[1] == susEdge[1] && v!=susEdge)
                    return v;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

