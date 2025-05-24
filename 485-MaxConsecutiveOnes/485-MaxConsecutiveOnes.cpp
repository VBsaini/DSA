// Last updated: 5/24/2025, 11:54:28 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int flag = 0;
        for(auto a : nums){
            if(a == 0){
                if(flag < count) flag = count;
                count = 0;
            } else {
                count++;
            }
        }
        if(flag > count) return flag;
        return count;
    }
};