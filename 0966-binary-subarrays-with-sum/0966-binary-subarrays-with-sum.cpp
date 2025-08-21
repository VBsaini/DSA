class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
    int atMost(vector<int>& nums, int goal){
        int i = 0;
        int j = 0;
        int sum = 0;
        int ans = 0;
        while(j < nums.size()){
            if(goal < 0) return 0;
            sum += nums[j];
            while( sum > goal) {
                sum -= nums[i];
                i++;
            }
            ans += (j- i + 1);
            j++;
        }
        return ans;
    }
};
