class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sumMax = nums[0];
        int sumMin = nums[0];
        int ansMax = nums[0];
        int ansMin = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int v1 = nums[i];
            int v2X = sumMax + nums[i];
            int v2N = sumMin + nums[i];
            sumMax = max(v1, v2X);
            sumMin = min(v1, v2N);
            ansMax = max(sumMax, ansMax);
            cout << sumMax << " - " << i << "   ";
            ansMin = min(sumMin, ansMin);
        }
        // cout << ansMin << " " << ansMax;
        return max(ansMax, abs(ansMin));
    }
};