class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = nums[0];
        int small = INT_MAX;
        int small2 = small;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < small){
                small2 = small;
                small = nums[i];
            } else if(nums[i] < small2){
                small2 = nums[i];
            }
        }
        return ans + small + small2;
    }
};