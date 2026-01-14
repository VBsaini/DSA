class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(0, nums);
        return ans;
    }

    void backtrack(int idx, vector<int> &nums){
        ans.push_back(temp);
        for(int i = idx; i < nums.size(); i++){
            temp.push_back(nums[i]);
            backtrack(i+1, nums);
            temp.pop_back();
        }
    }
};