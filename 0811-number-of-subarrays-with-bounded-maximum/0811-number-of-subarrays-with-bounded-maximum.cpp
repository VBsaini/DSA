class Solution {
public:
    int countlessthanorequal(int limit, vector<int>& nums){
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j < nums.size()){
            if(nums[j] > limit){
                i = j + 1;
            }
            ans += (j-i+1);
            j++;
        }
        return ans;
    } 
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countlessthanorequal(right, nums) - countlessthanorequal(left - 1, nums);
    }
};