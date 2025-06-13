class Solution {
public:
    int countValid(vector<int>& nums, int thres){
        int index = 0, count = 0;
        while(index < nums.size()-1){
            if(nums[index + 1] - nums[index] <= thres){
                count++;
                index++;
            }
            index++;
        }
        return count;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums[nums.size()-1] - nums[0];
        while(l < r){
            int mid = (l + r)/2;
            if(countValid(nums, mid) >= p){
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;

    }
};