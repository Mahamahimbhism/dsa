#include <bits/stdc++.h>
using namespace std;

class DListNode {
public:
    int key, val;
    DListNode *next, *prev;
    DListNode() : next(nullptr), prev(nullptr), val(0) {}
    DListNode(int key, int val) : next(nullptr), prev(nullptr), val(val), key(key) {}
};

class LRUCache {
public:
    DListNode *head, *tail;
    unordered_map<int, DListNode*> mp;
    int size;

    LRUCache(int n): size(n), head(nullptr), tail(nullptr) {}

    void addNodeAtHead(DListNode *newNode) {
        if(!head) {
            newNode->next = nullptr;
            tail = head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        head->prev = nullptr;
    }

    void disconnectNode(DListNode *node, bool del) {
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

    void put(int key, int val) {
        bool newElement = !mp.count(key);
        if(newElement) {
            DListNode* newNode = new DListNode(key, val);
            mp[key] = newNode;
            int cur_sz = mp.size();
            //create a new node for DLL
            addNodeAtHead(newNode);
            //drop LRU if applicable
            if(cur_sz>size) {
                mp.erase(tail->key);
                disconnectNode(tail, 1);
            }
        }
        else {
            auto dummy = mp[key];
            //now we will remove this dummy node from dll and add a new entry and make it the head
            disconnectNode(dummy, 0);
            dummy->val = val;
            //now add the dummy to the top
            addNodeAtHead(dummy);
        }
    }

    int get(int key) {
        if(!mp.count(key)) return -1;
        DListNode* node = mp[key];
        //remove node and add it to the head
        disconnectNode(node, 0);
        addNodeAtHead(node);
        return node->val;
    }
};