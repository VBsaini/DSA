class Solution {
public:
    int jump(vector<int>& nums) {
      int end = 0;
      int count = 0;
      for(int i = 0; i < nums.size()-1; i++){
        int jumpE = nums[i] + i;
        if(end < jumpE && end < nums.size()-1){
            count++;
            end = jumpE;
        } 
      }  
      return count;
    }
};