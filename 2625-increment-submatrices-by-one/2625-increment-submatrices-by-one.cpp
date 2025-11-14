class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> S(n+1, vector<int>(n+1, 0));
        for(auto a : queries){
            int r1 = a[0]; 
            int c1 = a[1];
            int r2 = a[2];
            int c2 = a[3];
            S[r1][c1] += 1;
            S[r1][c2+1] -= 1;
            S[r2+1][c1] -= 1;
            S[r2+1][c2+1] += 1;
        }
        vector<vector<int>> ans(n, vector<int>(n, 0));
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                S[i][j] = S[i][j] + S[i-1][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                S[i][j] += S[i][j-1];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ans[i][j] = S[i][j];
            }
        }
        
        return ans;
    }
};