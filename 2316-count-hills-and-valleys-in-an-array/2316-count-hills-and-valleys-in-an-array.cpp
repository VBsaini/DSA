class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0;
        vector<int> uniq;
        uniq.push_back(nums[0]);
        for(int i = 1; i < nums.size();i++){
            if(nums[i-1] != nums[i]){
                uniq.push_back(nums[i]);
            }
        }
        for(int i = 1; i < uniq.size() - 1;i++){
            int left = uniq[i-1];
            int right = uniq[i+1];
            int mid = uniq[i];
            if((mid > left && mid > right) || (mid < left && mid < right)){
                ans += 1;
            }
        }
        return ans;
    }
};