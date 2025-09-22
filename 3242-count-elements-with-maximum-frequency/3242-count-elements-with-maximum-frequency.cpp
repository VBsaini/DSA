class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> M;
        for(auto a : nums){
            M[a]++;
        }
        int count = 0;
        int mx = 0;
        for(auto a : M){
             if(a.second > mx){
                count = a.second;
                mx = a.second;
             } else if(a.second == mx){
                count += a.second;
             }
        }
        return count;
    }
};