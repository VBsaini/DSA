class SegmentTree {
    vector<int> tree;
    int n;
public:
    SegmentTree(vector<int>& arr){
        n = arr.size();
        tree.resize(n * 4);
        build(0, 0, n-1, arr);
    }

    void build(int node, int l, int r, vector<int>& arr){
        if(l == r){
            tree[node] = arr[l];
            return;
        }
        int mid = (l + r) / 2;
        build(2 * node + 1, l, mid, arr);
        build(2 * node + 2, mid + 1, r, arr);
        tree[node] = max(tree[2*node+1], tree[2*node+2]);
    }

    int queryFirst(int node, int l, int r, int val){
        if(tree[node] < val) return -1;
        if(l == r) return l;
        int mid = (l + r) / 2;
        int left = queryFirst(2 * node + 1, l , mid, val);
        if(left != -1) return left;
        return queryFirst(2 * node + 2, mid + 1 , r, val);
    }

    void update(int node, int l, int r, int idx, int val) {
        if(l == r){
            tree[node] = val;
            return;
        }
        int mid = (l + r) / 2;
        if(idx <= mid) update(2*node+1, l, mid, idx, val);
        else update(2*node+2, mid + 1, r, idx, val);
        tree[node] = max(tree[2*node+1], tree[2*node+2]);
    }
};

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        SegmentTree segTree(baskets);
        int unplaced = 0;
        for(int a : fruits){
            int idx = segTree.queryFirst(0, 0, n-1, a);
            if(idx == -1){
                unplaced++;
            } else {
                segTree.update(0, 0, n-1, idx, -1);
            }
        }
        return unplaced;
    }
};

