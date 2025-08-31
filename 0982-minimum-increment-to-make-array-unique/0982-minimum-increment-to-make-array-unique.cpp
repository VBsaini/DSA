class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans = 0;
        int temp = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] >= nums[i]){
                int val = nums[i-1] - nums[i] + 1; 
                nums[i] = nums[i - 1] + 1;
                ans += val;
            }
        }
        return ans;
    }
};