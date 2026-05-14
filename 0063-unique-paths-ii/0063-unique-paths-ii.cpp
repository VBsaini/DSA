class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int m = Grid.size();
        if(m == 0) return 0;
        int n = Grid[0].size();
        vector<vector<int>> DP(m+1, vector<int>(n+1));
        if(Grid[0][0] == 1) return 0;
        DP[1][1] = 1;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(i == 1 && j == 1) continue;
                if(Grid[i-1][j-1] == 1){
                    DP[i][j] = 0;
                } else {
                    DP[i][j] = DP[i-1][j] + DP[i][j-1];
                }
            }
        }
        return DP[m][n];
    }
};