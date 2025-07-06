class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i = 0;
        int ans = 0;
        int j = 0;
        map<int,int> M;
        while(j < nums.size()){
            M[nums[j]]++;
            while(M.rbegin()->first - M.begin()->first > limit){
                M[nums[i]]--;
                if(M[nums[i]] == 0) M.erase(nums[i]);
                i++;
            }
            ans = max(ans, (j - i + 1));
            j++;
        }
        return ans;
    }
};