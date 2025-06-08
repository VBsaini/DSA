// Last updated: 6/8/2025, 12:48:03 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int r = n-1;
        int ans = 0;
        if(nums.size() == 1){
        return 0;
        }
        while(l<r){
            int mid = (l + r) / 2;
            if(nums[mid] > nums[mid + 1]){
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};