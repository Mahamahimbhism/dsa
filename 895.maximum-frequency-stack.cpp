/*
 Can be done in O(1) by using frequency map and a stack map!
 */

// @lc code=start
class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> freqSt;
    int maxFreq;
    FreqStack() {
        maxFreq=0;
    }
    
    void push(int val) {
        freq[val]++;
        maxFreq=max(maxFreq, freq[val]);
        freqSt[freq[val]].push(val);
    }  
    
    int pop() {
        int ans = freqSt[maxFreq].top();
        freqSt[maxFreq].pop();
        if(freqSt[maxFreq].empty()) maxFreq--;
        freq[ans]--;
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
// @lc code=end

