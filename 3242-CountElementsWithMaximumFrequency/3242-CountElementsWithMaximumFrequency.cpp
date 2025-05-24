// Last updated: 5/24/2025, 11:53:53 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> M;
        int highC = 0;
        for(auto s:nums){
            M[s]++;
            highC = max(highC, M[s]);
        }
        int count=0;
        int ans = 0;
        for(auto b: M){
            if(highC == b.second){
                ans += b.second;
            }
        }
        return ans;
    }
};