class Solution {
public:
    int candy(vector<int>& R) {
        vector<int> sum(R.size(), 1);
        int candy = 1;
        for(int i = 1; i <= R.size()-1; i++){
            if(R[i] > R[i-1]){
                sum[i] = sum[i-1] + 1;
            }
        }
        for(int i = R.size()-2; i >= 0; i--){
            if(R[i] > R[i+1]){
                sum[i] = max(sum[i], sum[i+1] + 1);
            }
        }
        int ans = 0;
        for(auto a : sum){
            cout << a << " " ;
            ans += a;
        }
        return ans;
    }
};