// Last updated: 5/24/2025, 11:54:31 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end());
        for(int i=0; i+1<nums.size();){
            if(nums[i] == nums[i+1]){
                arr.push_back(nums[i]);
                i = i+2;
                continue;
            }
            i = i+1;

        }
        return arr;
    }
};