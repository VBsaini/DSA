class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size() - 2; i++) {
            if(i != 0 && nums[i] == nums[i-1]) continue;
            int target = -1 * nums[i];
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = nums[l] + nums[r];
                if(sum == target){
                    ans.push_back({-sum, nums[l], nums[r]});
                    r--;
                    l++;
                    while(l < nums.size() && nums[l] == nums[l - 1]) l++;
                    while(r >= 0 && nums[r] == nums[r + 1]) r--;
                } else if (sum > target){
                    r--;
                } else {
                    l++;
                }
            }
        }
        return ans;
    }
};