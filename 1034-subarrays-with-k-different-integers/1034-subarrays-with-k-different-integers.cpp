class Solution {
    int atMost(int k, vector<int>& nums){
        unordered_map<int, int> M;
        int count = 0;
        int l = 0;
        int r = 0;
        while(r < nums.size()){
            M[nums[r]]++;
            while(M.size() > k){
                M[nums[l]]--;
                if(M[nums[l]] == 0){
                    M.erase(nums[l]);
                }
                l++;
            }
            count += r - l + 1;
            r++;
        }
        return count;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        return atMost(k, nums) - atMost(k-1, nums);
    }
};