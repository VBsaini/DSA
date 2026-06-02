class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = matrix;
        for(int i = 0; i < temp.size(); i++){
            for(int j = 0; j < temp[0].size(); j++){
                if(temp[i][j] == 0) {
                    int k = 0, m = 0;
                    while(k < temp.size()){
                        matrix[k][j] = 0;
                        k++;
                    }
                    while(m < temp[0].size()){
                        matrix[i][m] = 0;
                        m++;
                    }
                }
            }
        }
    }
};