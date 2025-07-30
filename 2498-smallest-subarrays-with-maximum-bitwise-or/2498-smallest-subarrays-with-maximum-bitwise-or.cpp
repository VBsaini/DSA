class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> lastseen(32, -1);
        vector<int> ans(n);
        for(int i = n-1; i >= 0; i--){
            for(int b = 0; b < 32; b++){
                if((1 << b) & nums[i]){
                    lastseen[b] = i;
                }
            }
            int ls = i;
            for(int j = 0; j < 32; j++){
                ls = max(ls, lastseen[j]);
            }
            ans[i] = ls - i + 1;
        }

        return ans;
    }
};