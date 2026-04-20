class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = 0;
        if(nums[l] != nums[r]){
            return abs(r - l);
        } else {
            while(nums[l] == nums[r]){
                l++;
            }
            ans = max(ans, abs(r-l));
            l = 0;
            while(nums[l] == nums[r]){
                r--;
            }
            ans = max(ans, abs(r-l));
        }
        return ans; 
    }
};