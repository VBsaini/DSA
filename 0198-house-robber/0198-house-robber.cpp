class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return nums[0];
        vector<int> dp(n+1);
        dp[0] = nums[0];
        dp[1] = max(nums[1], nums[0]);
        if(n == 2) return max(dp[0], dp[1]);
        for(int i = 2; i < n; i++){
            int opt1 = dp[i-2] + nums[i];
            int opt2 = dp[i-1];
            dp[i] = max(opt1, opt2);
        }
        return dp[n-1];
    }
};