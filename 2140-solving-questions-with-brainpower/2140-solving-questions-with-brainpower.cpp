class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n+1);
        for(int i = 0; i < n; i++){
            dp[i] = questions[i][0];
        }

        for(int i = n-1; i >= 0; i--){
            if(n-1 >= i + questions[i][1] + 1){
                dp[i] = questions[i][0] + dp[i + questions[i][1] + 1];
            } else {
                dp[i] = questions[i][0];
            }
            if(i < n-1){
                dp[i] = max(dp[i + 1], dp[i]);
            }
        }
        
        return dp[0];
    }
};