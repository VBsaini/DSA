class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int max = 0;
        int ans = 0;
        int n = nums.size();
        for (int a : nums) {
            max |= a;  
        }
        for(int mask = 1; mask < (1 << n); mask++){
            int orVal = 0;
            for(int i = 0; i < n; i++){
                if(mask & (1 << i)){
                    orVal |= nums[i];
                }
            }
            if(orVal == max){
                ans++;
            }
        }
        cout << max;
        return ans;
    }
};