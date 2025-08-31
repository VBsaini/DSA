class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> M;
        int temp = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(M.find(nums[i]) != M.end()){
                temp++;
                cout << temp  << " " << nums[i]; 
                ans += temp - nums[i];
                M[temp] = 1;
            } else {
                M[nums[i]] = 1;
                temp = nums[i];
            }
        }
        return ans;
    }
};