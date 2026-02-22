class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int diff = INT_MAX;
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            int l = i + 1;
            int r = n - 1;
            int targetT = target - nums[i];
            while(l < r){
                int sum = nums[l] + nums[r];
                if(sum == targetT){
                    cout << sum << " " << targetT << endl;
                    return sum + nums[i];
                } else if(sum > targetT){
                    r--;
                } else {
                    l++;
                }
                if(abs(targetT-sum) < diff){
                    diff = abs(targetT-sum);
                    ans = sum + nums[i];
                }
            }
        }
        return ans;
    }
};