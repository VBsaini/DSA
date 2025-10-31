class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> M;
        for(auto a : nums){
            M[a]++;
            if(M[a] == 2){
                ans.push_back(a);
            }
            if(ans.size() == 2){
                break;
            }
        }
        return ans;
    }
};