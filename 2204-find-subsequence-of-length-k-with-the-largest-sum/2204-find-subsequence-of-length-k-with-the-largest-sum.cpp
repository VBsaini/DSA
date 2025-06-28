class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
        vector<pair<int, int>> M;
        for(int i = 0; i < nums.size();i++){
            M.push_back({nums[i], i}); 
        }

        sort(M.begin(), M.end(), [](auto& a, auto& b){
            return a.first > b.first;
        });

        M.resize(k);
        
        sort(M.begin(), M.end(), [](auto& a, auto& b){
            return a.second < b.second;
        });

        for(auto a : M){
            ans.push_back(a.first);
        }
        return ans;
    }
};