class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        vector<int> dp(n+1);
        dp[0] = 0;
        // dp[1] = 0;
        for(int i = 1; i <= n; i++){
            if(colors[i] == colors[i-1]){
                int opt1 = dp[i-1] + neededTime[i-1];
                int opt2 = dp[i-1] + neededTime[i];
                dp[i] = min(opt1, opt2);
                neededTime[i] = max(neededTime[i-1], neededTime[i]);
            } else {
                dp[i] = dp[i-1];
            }
        }
        return dp[n];
    }
};