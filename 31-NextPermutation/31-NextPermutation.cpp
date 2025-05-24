// Last updated: 5/24/2025, 11:55:19 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for(int a = n-2; a>=0;a--){
            if(nums[a] < nums[a+1]){
                ind = a;
                break;
            }
        }
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            // return nums;
        } else {

        for(int a = n-1; a>=0; a--){
            if(nums[a] > nums[ind]){
                swap(nums[a], nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
        }
        // return nums;
    }
};