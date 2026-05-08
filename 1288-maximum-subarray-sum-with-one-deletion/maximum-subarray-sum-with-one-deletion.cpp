class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int sum = 0;
        int maxSoFar = INT_MIN;
        vector<int> suffix(arr.size());
        suffix[arr.size() - 1] = arr[arr.size() - 1];
        for(int i = arr.size()-2; i >= 0; i--){
            // sum = sum + arr[i];
            // maxSoFar = max(sum, maxSoFar);
            suffix[i] = max(arr[i], arr[i] + suffix[i+1]);
            // cout << maxSoFar << " ";
        }
        suffix.push_back(0);
        sum = -pow(10, 4);
        vector<int> ansAr;
        int ans = arr[0];
        for(int i = 0; i < arr.size(); i++){
            int v1 = arr[i];
            int v2 = sum + arr[i];
            int v3 = sum + suffix[i+1];
            sum = max({v1, v2});
            ansAr.push_back(max(max(ans, sum), v3));
        }
        for(auto a : ansAr){
            ans = max(ans, a);
        }
        return ans;
    }
};