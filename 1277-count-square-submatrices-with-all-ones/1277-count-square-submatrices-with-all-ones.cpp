class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        int ans = 0;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                int cost = matrix[i-1][j-1];
                int top = dp[i-1][j];
                int left = dp[i][j-1];
                int topleft = dp[i-1][j-1];
                if(cost == 1)
                {
                    dp[i][j] = cost + min({top, left, topleft});
                    ans += dp[i][j];
                }
            }
        }

        return ans;

    }
};