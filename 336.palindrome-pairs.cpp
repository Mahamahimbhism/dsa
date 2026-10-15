
using ll = long long int;

const ll P = 31;
const ll MOD = 1e9 + 7;

vector<int> power;
ll nodes = 0;

class HashString {
public:
    string str;
    vector <int> pref, revPref;
    int n;
    HashString (string str) {
        this->str = str;
        buildHash();
    }

    void buildHash() {
        n = str.length();
        string revStr = str;
        reverse(revStr.begin(), revStr.end());
        pref.assign(n+1, 0);
        revPref.assign(n+1, 0);

        for(int i=0; i<n; i++) {
            pref[i+1] = (ll)(pref[i]*P + (str[i] - 'a' + 1)) % MOD;
            revPref[i+1] = (ll)(revPref[i]*P + (revStr[i] - 'a' + 1)) % MOD;
        }
    }
    
    bool checkPalin(int l, int r) {
        if(l>=r) return true;
        ll fwdHash = (pref[r+1] - (1LL*pref[l]*power[r-l+1])%MOD + MOD)%MOD;
        int revL = n-r-1;
        int revR = n-l-1;
        ll revHash = (revPref[revR+1] - (1LL*revPref[revL]*power[revR-revL+1])%MOD + MOD)%MOD;
        return fwdHash == revHash;
    }

};

class TrieNode {
public:
    TrieNode *child[26];
    bool isEnd;
    int endIndex;

    TrieNode () {
        isEnd = false;
        endIndex = -1;
        for(int i=0; i<26; i++) 
            child[i] = nullptr;
    }

    void insertWord (string &s, int indx) {
        TrieNode *cur = this;
        for(int i=0; i<s.size(); i++) {
            int idx = s[i]-'a';
            if(cur->child[idx] == nullptr) {
                nodes++;
                cur->child[idx] = new TrieNode();
            }
            cur = cur->child[idx];
        }
        cur->isEnd = true;
        cur->endIndex = indx;
    }
};

class Solution {
public:
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<HashString> a;
        set<pair<int, int>> ans;
        TrieNode *root = new TrieNode();
        TrieNode *revRoot = new TrieNode();
        int idx = 0, maxL = 0;
        for(auto word: words){
            maxL = max(maxL, (int)word.length());
            a.emplace_back(word);
            root->insertWord(word, idx);
            reverse(word.begin(), word.end());
            revRoot->insertWord(word, idx);
            ++idx;
        }
        power.assign(maxL+1, 1);
        for(int i=0; i<maxL; i++) {
            power[i+1] = (1LL*power[i]*P)%MOD;
        }

        int n = a.size();

        for(int i=0; i<n; i++) {
            string &str = a[i].str;
            if(str.empty()) continue;
            //find prefix palindromes - search for remaining suffix
            auto suffixNode = root;
            for(int r = str.length()-1; r>=-1; r--) {
                if(a[i].checkPalin(0, r)) {
                    if(suffixNode->isEnd && suffixNode->endIndex!=i)
                    ans.insert({suffixNode->endIndex, i});
                }
                if(r>=0 && suffixNode->child[str[r]-'a']!=nullptr) 
                    suffixNode = suffixNode->child[str[r]-'a'];
                else 
                    break;
            }
            //find suffix palindromes
            auto prefixNode = revRoot;
            int r = str.length()-1;
            for(int l = 0; l<=r+1; l++) {
                if(a[i].checkPalin(l, r)) {
                    if(prefixNode->isEnd && prefixNode->endIndex!=i)
                    ans.insert({i, prefixNode->endIndex});
                }   
                if(l<=r && prefixNode->child[str[l]-'a']!=nullptr)
                    prefixNode = prefixNode->child[str[l]-'a'];
                else
                    break;
            }
        }
        vector<vector<int>> finans;
        for(auto v: ans) {
            finans.push_back({v.first, v.second});
        }
        cout<<nodes<<endl;
        return finans;
    }
};

