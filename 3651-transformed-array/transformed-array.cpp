class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                int pos = (i+nums[i])%n;
                result.push_back(nums[pos]);
            } else if(nums[i] < 0){
                int posN = (n+(i+nums[i])%n)%n;
                result.push_back(nums[posN]);
            } else {
                result.push_back(0);
            }
        }
        return result;
    }
};