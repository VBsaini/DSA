// Last updated: 5/24/2025, 11:54:25 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> M;
        int count = 0;
        int ans = 0;
        M[0] = 1;
        for(auto s: nums){
            count += s;
    
            if(M.find(count - k) != M.end()){
                ans += M[count - k];
            }

            M[count]++;
        }
        return ans;
    }
};