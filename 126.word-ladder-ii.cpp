/*
 * @lc app=leetcode id=126 lang=cpp
 *
 * [126] Word Ladder II
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> ans;
    
    // Backtrack from endWord to beginWord using parent DAG
    void dfs(string node, string beginWord, vector<string>& temp, unordered_map<string, vector<string>>& parents) {
        if(node == beginWord) {
            temp.push_back(beginWord);
            reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            reverse(temp.begin(), temp.end());
            temp.pop_back();
            return;
        }
        
        for(const string& parent : parents[node]) {
            temp.push_back(node);
            dfs(parent, beginWord, temp, parents);
            temp.pop_back();
        }
    }

    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        // Check if endword exists
        if(find(wordList.begin(), wordList.end(), endWord) == wordList.end()) 
            return {};
        if(find(wordList.begin(), wordList.end(), beginWord) == wordList.end()) 
        wordList.push_back(beginWord);
        
        // Create buckets using patterns
        unordered_map<string, vector<string>> bucket;
        for(const string& word : wordList) {
            for(int j = 0; j < word.length(); j++) {
                string pattern = word;
                pattern[j] = '*';
                bucket[pattern].push_back(word);
            }
        }
        
        // Build adjacency list from buckets
        unordered_map<string, vector<string>> g;
        for(auto& [pattern, words] : bucket) {
            for(int i = 0; i < words.size(); i++) {
                for(int j = i + 1; j < words.size(); j++) {
                    g[words[i]].push_back(words[j]);
                    g[words[j]].push_back(words[i]);
                }
            }
        }
        
        // BFS with parent tracking
        unordered_map<string, int> dis;
        unordered_map<string, vector<string>> parents;
        queue<string> q;
        q.push(beginWord);
        dis[beginWord] = 0;
        
        while(!q.empty()) {
            string node = q.front();
            q.pop();
            
            for(const string& neighbor : g[node]) {
                if(dis.count(neighbor) == 0) {
                    // First time visiting this neighbor
                    dis[neighbor] = dis[node] + 1;
                    parents[neighbor].push_back(node);
                    q.push(neighbor);
                } else if(dis[neighbor] == dis[node] + 1) {
                    // Same distance level, add as another parent
                    parents[neighbor].push_back(node);
                }
            }
        }
        
        // If endWord not reachable, return empty
        if(dis.count(endWord) == 0) return {};
        
        // DFS to reconstruct paths from endWord back to beginWord
        vector<string> temp;
        dfs(endWord, beginWord, temp, parents);
        
        return ans;
    }
};
// @lc code=end

