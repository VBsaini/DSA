class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int max_end = 0;
        int min_end = 0;
        int max_end_here = 0;
        int min_end_here = 0;
        int check = 0;
        for(int i = 0; i < n; i++){
            max_end_here += nums[i];
            min_end_here += nums[i];
            max_end = max(max_end, max_end_here);
            min_end = min(min_end, min_end_here);

            if(min_end_here > 0){
                min_end_here = 0;
            }
            if(max_end_here < 0){
                max_end_here = 0;
            }
        }
        return max(max_end, abs(min_end));
    }
};