// Last updated: 5/24/2025, 11:55:12 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int col = matrix.size();
        int row = matrix[0].size();
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;
        int count = 0;
        vector<int> ans = {}; 
        while(count < col*row){
                for(int i = startRow; count < col*row && i<= endRow; i++){
                    cout << matrix[startCol][i];
                    ans.push_back(matrix[startCol][i]);
                    count++;

                }
                startCol++;
                for(int i = startCol; count < col*row && i<=endCol; i++){
                    cout << matrix[i][endRow];
                    ans.push_back(matrix[i][endRow]);
                    count++;
                }
                endRow--;
                for(int i = endRow; count < col*row && i >= startRow; i--){
                    cout << matrix[endCol][i];
                    ans.push_back(matrix[endCol][i]); 
                    count++;
                }
                endCol--;
                for(int i = endCol; count < col*row && i>=startCol; i--){
                    cout << matrix[i][startRow];
                    ans.push_back(matrix[i][startRow]); 
                    count++;
                }
                startRow++;
                
        }
        return ans;
    }
};