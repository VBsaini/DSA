// Last updated: 6/8/2025, 12:48:05 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int last = nums[nums.size()-1];
        if(nums[0] < last){
            return nums[0];
        }
        int ans = INT_MAX;
        int l = 0;
        int r = nums.size()-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(nums[l] <= nums[mid]){
                ans = min(nums[l], ans);
                l = mid + 1;
            } else {
                ans = min(nums[mid], ans);
                r = mid - 1;
            }
        }
        return ans;

    }
};