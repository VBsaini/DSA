class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int kl;
    KthLargest(int k, vector<int>& nums) {
        kl = k;
        for(auto a : nums){
            add(a);
        }
    }
    
    int add(int val) {
        if(pq.size() < kl){
            pq.push(val);
        } else if(val > pq.top()){
            pq.push(val);
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */