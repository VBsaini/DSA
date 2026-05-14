class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> DP(m+1, vector<int>(n+1));
        DP[0][0] = grid[0][0];

        // first column
        for (int i = 1; i < m; i++) {
            DP[i][0] = DP[i-1][0] + grid[i][0];
        }

        // first row
        for (int j = 1; j < n; j++) {
            DP[0][j] = DP[0][j-1] + grid[0][j];
        }
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                int cost = grid[i][j];
                int opt1 = DP[i-1][j] + cost;
                int opt2 = DP[i][j-1] + cost;
                DP[i][j] = min(opt1, opt2);
            }
        }
        return DP[m-1][n-1];
    }
};