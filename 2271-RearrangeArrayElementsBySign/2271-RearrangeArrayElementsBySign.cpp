// Last updated: 5/24/2025, 11:54:00 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int p = 1;
        int l = 0;
        for(auto a: nums){
            if(a<0){
                ans[p] = a;
                p += 2;
            } else {
                ans[l] = a;
                l += 2;
            }
        }
    return ans;
    }
};