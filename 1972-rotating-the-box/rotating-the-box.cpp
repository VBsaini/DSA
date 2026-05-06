class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        for(int i = 0; i < n; i++){
            int bottom = m-1;
            for(int j = m-1; j >= 0; j--){
                char block = boxGrid[i][j];
                if(block == '.'){
                    continue;
                }
                if(block == '*'){
                    bottom = j-1;
                }
                if(block == '#'){
                    swap(boxGrid[i][j], boxGrid[i][bottom]);
                    bottom--;
                }
            }
        }
        vector<vector<char>> ans;
        for(int i = 0; i < m; i++){
            vector<char> temp;
            for(int j = 0; j < n; j++){
                cout << boxGrid[j][i] << " ";
                temp.push_back(boxGrid[j][i]);
            }
            cout << endl;
            reverse(temp.begin(), temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};