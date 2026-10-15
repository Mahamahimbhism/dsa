#include <bits/stdc++.h>

using namespace std;

class LNode {
public:
    LNode *next, *prev;
    int key, val, freq;
    LNode(int key, int val, int freq) : key(key), val(val), freq(freq), prev(nullptr), next(nullptr) {}
};

class DLL {
public:
    LNode *head, *tail;
    DLL() : head(nullptr), tail(nullptr) {}

    void addNodeAtHead(LNode *newNode) {
        if(!head) {
            newNode->prev = nullptr;
            newNode->next = nullptr;
            tail = head = newNode;
            return;
        }
        newNode->prev = nullptr;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void disconnectNode(LNode *node, bool del) {
        if(head==tail) {
            head=tail=nullptr;
        }
        else if(node==head) {
            auto dummy = head;
            head = head->next;
            dummy->next = nullptr;
            head->prev = nullptr;
        } else if(node==tail) {
            auto dummy = tail;
            tail = tail->prev;
            tail->next = nullptr;
            dummy->prev = nullptr;
        } else {
            auto beforenode = node->prev;
            auto afternode = node->next;
            beforenode->next = afternode;
            afternode->prev = beforenode;
            node->prev = nullptr;
            node->next = nullptr;
        }
        if(del) delete(node);
    }

    LNode* removeTail() {
        auto oldTail = tail;
        disconnectNode(tail, 0);
        return oldTail;
    }
};

class LFUCache {
public:
    unordered_map <int, DLL> freqList; //maps freq -> DLL
    unordered_map <int, LNode*> mp; //maps key -> Node storing that key val pair
    int capacity, min_freq;

    LFUCache(int capacity): capacity(capacity), min_freq(1) {}

    void put(int key, int val) {
        if(!capacity) return;
        //key not already present
        if(!mp.count(key)) {
            //eviction if capactity is exceeded
            if(mp.size()==capacity) {
                auto tail = freqList[min_freq].removeTail();
                mp.erase(tail->key);
                delete(tail);
            }
            mp[key] = new LNode(key, val, 1);
            freqList[mp[key]->freq].addNodeAtHead(mp[key]);
            
            min_freq = 1;
        }
        //key already present
        else {
            freqList[mp[key]->freq].disconnectNode(mp[key], 0);
            //check if DLL become empty
            if(!freqList[mp[key]->freq].head && mp[key]->freq==min_freq) min_freq++;
            mp[key]->freq++;
            mp[key]->val = val;
            freqList[mp[key]->freq].addNodeAtHead(mp[key]);
        }
    }

    int get(int key) {
        if(!mp.count(key)) return -1;
        int ans = mp[key]->val;
        freqList[mp[key]->freq].disconnectNode(mp[key], 0);
        //check if DLL become empty
        if(!freqList[mp[key]->freq].head && mp[key]->freq==min_freq) min_freq++;
        mp[key]->freq++;
        freqList[mp[key]->freq].addNodeAtHead(mp[key]);
        return ans;
    }
};

