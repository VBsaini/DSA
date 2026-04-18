class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> M;
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(M.find(nums[i]) != M.end()){
                auto it = M.find(nums[i]);
                ans = min(ans, abs(i- it->second));
            }
                int n = nums[i];
                int sum = 0;
                while(n > 0){
                    int rem = n%10;
                    sum = sum*10 + rem;
                    n = n/10;
                }
                cout << sum << " ";
                M[sum] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};