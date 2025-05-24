// Last updated: 5/24/2025, 11:54:24 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = l + (r - l)/2;
        while(l<=r){
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid]>target){
                r = mid -1;
            } else {
                l = mid + 1;
            }
            mid = l + (r - l)/2;
        }

        return -1; 
    }
};