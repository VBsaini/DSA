// Last updated: 5/24/2025, 11:54:39 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int sum = ((N * (N + 1)) / 2);
        for(int a = 0; a<N;a++){
            sum -= nums[a];
        }
        return  sum;
    }
};