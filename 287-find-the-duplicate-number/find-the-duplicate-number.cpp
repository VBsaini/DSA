class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int hare = nums[0];
        int tut = nums[0];
        while(true){
            tut = nums[tut];
            hare = nums[nums[hare]];
            if(tut == hare){
                break;
            }
        }
        int ptr1 = nums[0];
        int ptr2 = tut;
        while(ptr1 != ptr2){
            ptr1 = nums[ptr1];
            ptr2 = nums[ptr2];
        }
        return ptr1;
    }
};