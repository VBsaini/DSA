class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto a : queries){
            int idx = a[0];
            int size = a[1];
            int k = a[2];
            int v = a[3];
            while(idx <= size){
                nums[idx] = (1LL * nums[idx] * v) % (1000000007);
                idx += k;
            }
        }
        int ans = 0;
        for(auto a : nums){
            ans = ans ^ a;
        }
        return ans;
    }
};