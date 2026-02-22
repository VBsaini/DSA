class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i + 1; j < n-1; j++){
                if(j > i + 1 && nums[j] == nums[j-1]) continue;
                int l = j + 1;
                int r = n - 1;
                while(l < r){
                    long long sum = (long long)target - (long long)(nums[i] + nums[j]);
                    long long s = nums[l] + nums[r];
                    if(s == sum){
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while(l < r && nums[l] == nums[l-1]) l++;
                        while(l < r && nums[r] == nums[r+1]) r--;
                    } else if(s>sum) {
                        r--;
                    } else {
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};