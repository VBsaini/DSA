class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int count = 1;
        vector<vector<int>> ans = {};
        int i = -1;
        int j = 0;
        for(int i = 0; i < numRows; i++){
            vector<int> temp(i+1, 1);
            for(int j = 1; j < i; j++){
                temp[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};