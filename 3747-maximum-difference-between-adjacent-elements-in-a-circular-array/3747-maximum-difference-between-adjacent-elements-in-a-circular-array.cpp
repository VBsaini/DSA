class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxe = abs(nums[n-1] - nums[0]);
        for(int i = 0; i+1 < n; i++){
            maxe = max(maxe, abs(nums[i+1]-nums[i]));
        }
        return maxe;
    }
};