// https://leetcode.com/problems/pascals-triangle/description/
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascalTriangle(int numRows) {
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

int main()
{
    int n = 10;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}