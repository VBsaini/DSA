class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        vector<vector<int>> ans = grid;
        int z = x;
        for(int i = x + k - 1; i >= x; i--){
            for(int j = y; j <= y+k-1; j++){
                ans[z][j] = grid[i][j];
            }
            z++;
        }
        return ans;
    }
};