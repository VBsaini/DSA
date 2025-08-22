class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int startTop = grid.size();
        int endTop = -1;
        int startLeft = grid[0].size();
        int endLeft = -1;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    startTop = min(i, startTop);
                    endTop = max(i, endTop);
                    startLeft = min(j, startLeft);
                    endLeft = max(j, endLeft);
                }                
            }
        }
        cout << startLeft << " " << endLeft << " " << startTop << " " << endTop;
        return (endTop - startTop + 1) * (endLeft - startLeft + 1);
    }
};