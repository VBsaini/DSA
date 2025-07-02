class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int ans = INT_MAX;
        int sum = 0;
        long long Tsum = 0;
        for(auto a : nums){
            Tsum += a;
        }
        int k = target/Tsum;
        int rem = target % Tsum;
        while(r<(2 * n)){
            if(sum == rem){
                ans = min(ans, (r - l) + (k * n));
                sum -= nums[l%n];
                l++;
            }
            if(sum > rem){
                sum -= nums[l%n];
                l++;
            } else if(sum < rem){
                sum += nums[r%n];
                r++;
            }
        }
        
        if(ans == INT_MAX){
            return -1;
        }
        return ans ;
    }
};