class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 0;
        for(int i = 2; i <= n; i++){
            int opt1 = dp[i-1] + cost[i-1];
            int opt2 = dp[i-2] + cost[i-2];
            dp[i] = min(opt1, opt2);
        }
        return dp[n];
    }
};