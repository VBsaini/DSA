class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i < nums.size()/2; i++){
            ans = max(ans, nums[left] + nums[right]);
            left++;
            right--;
        }
        return ans;
    }
};