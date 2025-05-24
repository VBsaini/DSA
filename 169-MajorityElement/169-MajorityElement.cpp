// Last updated: 5/24/2025, 11:54:51 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate;
        for(int a = 0; a<nums.size(); a++){
            if(count == 0){
                candidate = nums[a];
            }
            if(nums[a] == candidate){
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};