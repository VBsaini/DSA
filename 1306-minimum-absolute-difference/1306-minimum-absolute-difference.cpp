class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int sum = INT_MAX;
        for(int i = 0; i < arr.size() - 1; i++){
            sum = min(sum, abs(arr[i+1] - arr[i]));
        }
        cout << sum;
        vector<vector<int>> ans;
        for(int i = 0; i < arr.size()-1; i++){
            if(sum == (arr[i+1] - arr[i])){
                ans.push_back({arr[i], arr[i+1]});
            }
               
        }
        return ans;
    }
};