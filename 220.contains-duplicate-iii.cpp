/*
 * @lc app=leetcode id=220 lang=cpp
 *
 * [220] Contains Duplicate III
 */

 /*
    9 13 17 43 20 -> 3
    
    we use coordinate compression + segment tree to find the number of elements in range l, r

 */

// @lc code=start

using lli = long long int;

class CoordinateCompression {
public:
    map<lli, int> mp; //maps a[i] -> compressed value
    vector<lli> v; //reverse mapping of mp
    int t;

    void add (lli val) {
        mp[val];
    }

    void build() {
        t=0;
        for(auto &[key, val]: mp) {
            v.push_back(key);
            val = t;
            t++;
        }
    }

    int notGreaterThan (lli val) {
        auto it = upper_bound(v.begin(), v.end(), val);
        if(it==v.begin()) //when every element is bigger than val
            return -1;
        --it;
        int idx = it - v.begin();
        return idx;
    }

    int notSmallerThan (lli val) {
        auto it = lower_bound(v.begin(), v.end(), val);
        int idx = it - v.begin();
        return idx;
    }

    lli originalVal (int val) {
        return v[val];
    }

    int compressedVal (lli val) {
        return mp[val];
    }

};

class SegmentTree {
public:
    vector <int> t;

    SegmentTree(int n) {
        t.assign(4*(n+1), 0);
    }

    void update(int idx, int l, int r, int pos, int val) {
        if(pos<l||pos>r) return;
        if(l==r) {
            t[idx]+=val;
            return;
        }
        int mid = (l+r)/2;
        update(idx<<1, l, mid, pos, val);
        update((idx<<1)+1, mid+1, r, pos, val);
        t[idx] = t[idx<<1]+t[(idx<<1)+1];
    }  

    int query(int idx, int l, int r, int lq, int rq) {
        if(l>rq || r<lq) return 0;
        if(lq<=l&&r<=rq) {
            return t[idx];
        }
        int mid = (l+r)/2;
        return query(idx<<1, l, mid, lq, rq) + query((idx<<1)+1, mid+1, r, lq, rq);
    }

};

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n = nums.size();
        CoordinateCompression cc;
        SegmentTree sgTree(n);
        //coordinate compression
        for(auto v: nums) cc.add(v);
        cc.build();

        for(int i=0; i<n; i++) {
            int lq = cc.notSmallerThan((long long)(nums[i]-valueDiff));
            int rq = cc.notGreaterThan((long long)(nums[i]+valueDiff));
            if(lq>rq) continue;
            if(sgTree.query(1, 0, n-1, lq, rq)>0)
            return true;
            if(i >= indexDiff) {sgTree.update(1, 0, n-1, cc.compressedVal(nums[i-indexDiff]), -1);}
            sgTree.update(1, 0, n-1, cc.compressedVal(nums[i]), 1);
        }
        return false;
    }
};
// @lc code=end

//without using segment tree - in O(n) time - bucket sort

// class Solution {
//     using ll = long long;

//     ll getBucketId(ll x, ll w) {
//         if (x >= 0) return x / w;
//         return ((x + 1) / w) - 1; // floor division for negatives
//     }

// public:
//     bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
//         if (indexDiff <= 0 || valueDiff < 0) return false;

//         ll width = (ll)valueDiff + 1;
//         unordered_map<ll, ll> bucket;

//         for (int i = 0; i < (int)nums.size(); i++) {
//             ll x = nums[i];
//             ll id = getBucketId(x, width);

//             if (bucket.count(id)) return true;
//             if (bucket.count(id - 1) && llabs(x - bucket[id - 1]) <= valueDiff) return true;
//             if (bucket.count(id + 1) && llabs(x - bucket[id + 1]) <= valueDiff) return true;

//             bucket[id] = x;

//             if (i >= indexDiff) {
//                 ll old = nums[i - indexDiff];
//                 ll oldId = getBucketId(old, width);
//                 bucket.erase(oldId);
//             }
//         }

//         return false;
//     }
// };