class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int loopSize = grid.size() + grid[0].size() - 1;
        unordered_map<int, vector<int>> M;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++) {
                M[i - j].push_back(grid[i][j]);
            }
        }
        for (auto& [key, vec] : M) {
            if (key < 0) {
                sort(vec.begin(), vec.end(), greater<int>()); // will write ascending
            } else {
                sort(vec.begin(), vec.end());                 // will write descending
            }
        }

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++) {
                int key = i - j;
                grid[i][j] = M[key].back();
                M[key].pop_back();
            }
        }

        return grid;
    }
};