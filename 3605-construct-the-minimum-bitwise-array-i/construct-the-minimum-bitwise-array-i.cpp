class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
        bool flag = true;
            for(int j = 1; j < nums[i]; j++){
                if((j | j+1) == nums[i]){
                    flag = false;
                    ans.push_back(j);
                    break;
                } 
            }
            if(flag) ans.push_back(-1);
        }
        return ans;
    }
};