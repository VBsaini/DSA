// Last updated: 5/24/2025, 11:55:05 PM
class Solution {
    bool binarySearch(vector<int>& nums, int start, int end, int key){
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid] == key){
                return true;
            }
            if(key>nums[mid]){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
         }
        return false;
    }
public:
    bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        sort(nums.begin(), nums.end());
        return binarySearch(nums, 0, end, target);
    }
};