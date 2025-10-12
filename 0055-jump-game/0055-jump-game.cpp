class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        int end = 0;
        for(int i = 0; i < nums.size(); i++){
            farthest = max(farthest, i + nums[i]);
            if(i == end){
                end = farthest;
            }
            if(end < i){
                return false;
            }
        }
        return true;
    }
};