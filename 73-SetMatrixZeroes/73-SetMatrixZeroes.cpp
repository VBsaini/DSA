// Last updated: 5/24/2025, 11:55:08 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1;
        for(int a = 0; a<matrix.size(); a++){
            for(int b = 0; b<matrix[0].size(); b++){
                if(matrix[a][b] == 0){
                    matrix[a][0] = 0;
                    if(b==0){
                        col0 = 0;
                    } else {
                        matrix[0][b] = 0;
                    }
                }
            }
        }
        for(int c = 1; c<matrix.size(); c++){
            for(int d = 1; d<matrix[0].size(); d++){
                if(matrix[c][d] != 0){
                    if(matrix[c][0] == 0 || matrix[0][d] == 0){
                        matrix[c][d] = 0;
                    }
                }
            }
        }
         if (matrix[0][0] == 0) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][0] = 0;
            }
        }
    }
};