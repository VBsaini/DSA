class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int, int> M;
        bool allNeg = true;
        int maxVal = INT_MIN;
        int ans = 0;
        for(int a : nums){
            if(allNeg && a >= 0) allNeg = false;
            if(allNeg && a > maxVal) maxVal = a;
            if(M.find(a) == M.end()){
                if(a > 0){
                    ans += a;
                }
            }
            M[a]++;
        }
        return allNeg ? maxVal : ans;
    }
};