class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int count = 0;
        vector<int> ans;
        if(nums[0] == 0){
            count++;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]){
                nums[i-1] = nums[i-1]*2;
                nums[i] = 0; 
            }
            if(nums[i] == 0){
                count++;
            }
        }
        for(auto a : nums){
            if(a != 0){
                ans.push_back(a);
            }
        }
        for(int i = 0; i < count; i++){
            ans.push_back(0);
        }; 
        return ans;
    }
};