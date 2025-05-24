// Last updated: 5/24/2025, 11:55:13 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int maxi = nums[0];
            int sum = 0;
            for(int a = 0; a<nums.size();a++){
                sum += nums[a];
                maxi = max(maxi, sum);
                if(sum < 0){
                    sum = 0;
                }
            }
            return maxi;
        }
};