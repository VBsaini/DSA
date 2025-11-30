class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        unordered_map<int, int> M;
        int ans = nums.size();
        M[0] = -1;
        long long sum = 0;
        for(int i = 0; i < nums.size(); i++){
            int a = nums[i];
            sum += a;
        }
        int rem = (int) (sum%p);
        if(rem == 0) return 0;
        long long prefix_sum = 0;
        for(int i = 0; i < nums.size();i++){
            prefix_sum += nums[i];
            int curr_rem = (int)(prefix_sum % p);
            int target = (curr_rem - rem + p ) % p;
            if(M.find(target) != M.end()){
                int len = i - M[target];
                ans = min(ans, len);
            }
            M[curr_rem] = i;
        }
        return (nums.size() == ans) ? -1 : ans;
    }
};