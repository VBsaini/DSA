// Last updated: 5/24/2025, 11:55:21 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num = 1;
        int index = 0;
        int n = nums[0];
        for(int i = 1; i<nums.size();i++){
            if(n != nums[i]){
                num = num+1;
                n = nums[i];
                index++;
                nums[index] = nums[i];
            }
        }
        return num;
    }
};