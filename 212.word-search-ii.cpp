/*
 * @lc app=leetcode id=212 lang=cpp
 *
 * [212] Word Search II
 */

// @lc code=start

class TrieNode {
public:
    TrieNode *child[26];
    bool isEnd;
    string endWord;

    TrieNode () {
        isEnd = false;
        endWord = "";
        for(int i=0; i<26; i++) 
            child[i] = nullptr;
    }

    void insertWord (string &s) {
        TrieNode *cur = this;
        for(int i=0; i<s.size(); i++) {
            int idx = s[i]-'a';
            if(cur->child[idx] == nullptr) {
                cur->child[idx] = new TrieNode();
            }
            cur = cur->child[idx];
        }
        cur->isEnd = true;
        cur->endWord = s;
    }
};

class Solution {
public:
    int n, m;

    vector<pair<int,int>> neigh = {
        {1,0}, {-1,0}, {0,1}, {0,-1}
    };

    bool check(int x, int y) {
        return x >= 0 && x < n &&
            y >= 0 && y < m;
    }

    vector<string> ans;
    vector<vector<int>> vis;
    vector<vector<char>> s;

    void dfs(int i, int j, TrieNode *cur) {
        if(cur->isEnd) {
            ans.push_back(cur->endWord);
            cur->isEnd = false;
        }
        //visit all its neighbours
        for(auto v: neigh) {
            int x = i+v.first;
            int y = j+v.second;
            if(check(x, y) && !vis[x][y]) {
                int idx = s[x][y] - 'a';
                if(cur->child[idx]!=nullptr) {
                    vis[x][y] = 1;
                    dfs(x, y, cur->child[idx]);
                    vis[x][y] = 0;
                }
            }
        }
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode *root = new TrieNode();
        s = board;
        for(auto word: words) 
            root->insertWord(word);
        
        n = board.size();
        m = board[0].size();
        vis.assign(board.size(), vector<int> (board[0].size(), 0));
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                int idx = board[i][j] - 'a';
                if(root->child[idx] != nullptr) {
                    vis[i][j] = 1;
                    dfs(i, j, root->child[idx]);
                    vis[i][j] = 0;
                }
            }
        }
        return ans;
    }
};
// @lc code=end