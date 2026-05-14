class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> DP(m+1, vector<int>(n+1));
        DP[1][1] = 1;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(i == 1 && j == 1) continue;
                DP[i][j] = DP[i-1][j] + DP[i][j-1];
            }
        }
        return DP[m][n];
    }
};