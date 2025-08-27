class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int count = 0;
        while(j+2 < nums.size()){
            if(nums[j] == 0){
                nums[j] = flip(nums[j]);
                nums[j+1] = flip(nums[j+1]);
                nums[j+2] = flip(nums[j+2]);
                count++;
            }
            j++;
        }
        if(nums[j] == 1 && nums[j+1] == 1){
            return count;
        }
        return -1;
    }
    int flip(int val){
        if(val == 0){
            return 1;
        } else {
            return 0;
        }
    }
};