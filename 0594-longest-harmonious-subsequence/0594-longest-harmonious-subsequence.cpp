class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> M;
        for(int i = 0; i < nums.size(); i++){
            M[nums[i]]++;
        }
        int ans = 0;
        for(auto a : nums){
            int sum = 0;

            if(M.find(a+1) != M.end()){
                sum = M[a];
                sum += M[a+1];
            }


            ans = max(ans, sum);
        }
        if(ans == 1) return 0;
        return ans;
    }
};