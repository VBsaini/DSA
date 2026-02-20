class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;
        while(p2 < nums.size() && nums[p2] < 0) p2++;
        p1 = p2 - 1;
        vector<int> ans;
        while(p1 >= 0 && p2 < nums.size()){
            int sqp2 = nums[p2]*nums[p2];
            int sqp1 = nums[p1]*nums[p1];
            if(sqp2 < sqp1){
                ans.push_back(sqp2);
                p2++;
            } else {
                ans.push_back(sqp1);
                p1--;
            }
        }
        while(p1 != -1){
            ans.push_back(nums[p1] * nums[p1]);
            p1--;
        }
        while(p2 != nums.size()){
            ans.push_back(nums[p2] * nums[p2]);
            p2++;
        }
        return ans;
    }
};