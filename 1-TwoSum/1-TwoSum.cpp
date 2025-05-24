// Last updated: 5/24/2025, 11:55:32 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int>   numMap;
     int n = nums.size();
     for(int a = 0;a<n;a++){
        int comp = target - nums[a];
        if(numMap.count(comp)){
            return {numMap[comp], a};
        }
        numMap[nums[a]] = a;
     }
     return {};
    }
};