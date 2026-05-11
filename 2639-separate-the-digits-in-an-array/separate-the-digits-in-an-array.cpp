class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto a : nums){
            vector<int> temp;
            while(a != 0){
                int rem = a%10;
                temp.insert(temp.begin(), rem);
                a = a/10;   
            }
            for(auto b : temp){
                ans.push_back(b);
            }
        }
        return ans;
    }
};