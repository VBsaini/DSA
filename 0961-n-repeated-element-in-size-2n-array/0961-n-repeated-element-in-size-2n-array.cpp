class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> M;
        for(auto a : nums){
            if(M.find(a) != M.end()){
                return a;
            }
            M[a]++;
        }
        return 0;
    }
};