// Last updated: 5/24/2025, 11:55:02 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int count = 1;
        for(int i = 0; i < numRows; i++){
            vector<int> temp;
            for(int j = 0; j< count; j++){
                if(count >= 3){
                    if(j == 0 || j+1 == count){
                        temp.push_back(1);
                    } else {
                    temp.push_back(ans[count-2][j-1]+ans[count-2][j]);
                    }
                } else {
                    temp.push_back(1);
                }
            }
            count++;
            ans.push_back(temp);
        }
        return ans;
    }
};