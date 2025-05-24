// Last updated: 5/24/2025, 11:54:06 PM
class Solution {
public:
    bool check(vector<int>& nums) {
      int x = 0;
      int a[nums.size()];
      for(int b = 1; b<nums.size(); b++){
        if(nums[b-1]>nums[b]){
            x = b;
        }
      }
      for(int i = 0; i<nums.size(); i++){
      a[i] = nums[(i+x)% nums.size()];
      cout << (a[i]);
      }
      for(int f = 1; f<sizeof(a)/sizeof(a[0]); f++){
        if(a[f-1]>a[f]){
            return false;
        }
      }
      return true;
    }
};