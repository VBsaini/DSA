class Solution {
public:
    int minOperations(vector<int>& nums) {
        int temp = nums[0];
        int ans = 0;
        for(int i = 1; i < nums.size(); i++){
            if(temp < nums[i]){
                temp = nums[i];
            } else {
                temp++;
                ans += temp - nums[i];
            }
        }
        return ans;
    }
};