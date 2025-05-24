// Last updated: 5/24/2025, 11:54:37 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }
};