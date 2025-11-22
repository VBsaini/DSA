class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ope = 0;
        for(auto a : nums){
            if(a%3 != 0){
                ope++;
            }
        }
        return ope;
    }
};