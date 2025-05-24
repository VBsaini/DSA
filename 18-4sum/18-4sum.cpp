// Last updated: 5/24/2025, 11:55:23 PM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < n-1; j++ ){
                if(j > i + 1 && nums[j] == nums[j-1]) continue;
                int k = j + 1;
                int l = n - 1;

                while(k<l){
                    long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                    long long sum = nums[k] + nums[l];
                    if(sum>newTarget){
                        l--;
                    }
                    else if (sum < newTarget){
                        k++;
                    } else {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++; l--;
                        while (k < l && nums[k] == nums[k - 1]) k++;
                        while (k < l && nums[l] == nums[l + 1]) l--; 
                    }
                }
            }
        }
        return ans;
    }
};