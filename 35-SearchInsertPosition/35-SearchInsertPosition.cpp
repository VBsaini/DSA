// Last updated: 5/24/2025, 11:55:16 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        long mid;
        if(target > nums[r]) return r+1;
        while(l<=r){
            mid = (l + r)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return l;
    }
};