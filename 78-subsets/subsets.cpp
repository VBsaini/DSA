class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int loop = 1<<nums.size();
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i < loop; i++){
            vector<int> list = {};
            for(int j = 0; j<n;j++){
                if(i & (1<<j)){
                    list.push_back(nums[j]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};