// Last updated: 5/24/2025, 11:54:45 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ar;
        int ct1 = 0;
        int ct2 = 0;
        int el1  = INT_MIN;
        int el2 = INT_MIN;
        for(int a = 0; a < nums.size(); a++){
            if(ct1 == 0 && el2 != nums[a]){
                ct1 = 1;
                el1 = nums[a];
            } else if(ct2 == 0 && el1 != nums[a]){
                ct2 = 1;
                el2 = nums[a];
            } else if(el1 == nums[a]){
                ct1++;
            } else if(el2 == nums[a]){
                ct2++;
            } else {
                ct1--;
                ct2--;
            }
        }
        ct1 = 0;
        ct2 = 0;
        for(int a = 0; a < nums.size(); a++){
            if(el1 == nums[a]) ct1++;
            if(el2 == nums[a]) ct2++;
        }
        int mini = (int)(nums.size()/3);
        if(ct1 > mini){
        ar.push_back(el1);
        }
        if(ct2 > mini){
        ar.push_back(el2);
        }
        return ar;
    }
};