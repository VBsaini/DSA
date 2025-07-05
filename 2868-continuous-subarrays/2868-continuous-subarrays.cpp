class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans = 0;
        int i = 0;
        int j = 0;
        map<int, int> M;
        while(j<nums.size()){
            M[nums[j]]++;

            while(M.rbegin()->first - M.begin()->first > 2){
                M[nums[i]]--;
                if (M[nums[i]] == 0) M.erase(nums[i]);
                i++;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }
};