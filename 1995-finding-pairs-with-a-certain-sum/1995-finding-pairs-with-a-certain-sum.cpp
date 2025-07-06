class FindSumPairs {
public:
    unordered_map<int, int> M1;
    unordered_map<int, int> M2;
    vector<int> nums22;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(auto a : nums1){
        M1[a]++;
        }
        for(auto b : nums2){
        M2[b]++;
        }
        nums22 = nums2;
    }
    
    void add(int index, int val) {
        int orgVal = nums22[index];
        M2[orgVal]--;
        if(M2[orgVal] == 0) M2.erase(orgVal);
        nums22[index] += val;
        M2[nums22[index]]++;
    }
    
    int count(int tot) {
        int temp = 0;
        for(auto a : M1){
            int b = tot - a.first;
            if(M2.find(b) != M2.end()){
                temp += M2[b] * a.second;  
            }
        }
        return temp;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */