class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> T = nums;
        while(T.size() > 1){
            vector<int> t;
            for(int i = 1; i < T.size(); i++){
                int num = T[i-1] + T[i];
                t.push_back(num%10);
            }
            T = t;
        }
        return T[0];
    }
};