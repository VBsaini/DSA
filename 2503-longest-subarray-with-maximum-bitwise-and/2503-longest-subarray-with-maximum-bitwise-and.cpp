class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0; 
        int count = 0;
        int andVal = *max_element(nums.begin(), nums.end());
        for(auto a : nums){
            if(a == andVal){
                count++;
                ans = max(ans, count);
            } else {
                count = 0;
            }
        }
        return ans;
    }
};