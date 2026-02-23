class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int high = 0;
        int ans = INT_MAX;
        int sum = 0;
        while(high < nums.size() + 1){
            if(sum >= target){
                ans = min(ans, high - low);
                cout << ans << " " << nums[low] << endl;
                sum -= nums[low];
                low++;
            } else {
                if( high >= nums.size()) break;
                sum += nums[high];
                high++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};