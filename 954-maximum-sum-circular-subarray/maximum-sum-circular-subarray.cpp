class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sumMin = nums[0];
        int ansMin = nums[0];

        int sumMax = nums[0];
        int ansMax = nums[0]; 
        bool allNeg = true;
        if(nums[0] >= 0){
            allNeg = false;
        }
        for(int i = 1; i < nums.size(); i++){
            int v1 = nums[i];
            int v2 = sumMin + nums[i];
            int v3 = sumMax + nums[i];

            sumMin = min(v1, v2);
            ansMin = min(ansMin, sumMin);
            
            sumMax = max(v1, v3);
            ansMax = max(ansMax, sumMax);
            
            if(v1 >= 0){
                allNeg = false;
            }
        }
        int ttlsum = 0;
        for(auto a : nums){
            ttlsum += a;
        }
        if(allNeg){
            int ans = nums[0];
            for(auto a : nums){
                ans = max(ans, a);
            }
            return ans;
        }
        return max(ttlsum - ansMin, ansMax);
    } 
};