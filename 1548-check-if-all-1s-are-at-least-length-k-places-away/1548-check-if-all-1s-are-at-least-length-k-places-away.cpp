class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
    int temp = -1;
     for(int i = 0; i < nums.size(); i++){
        int a = nums[i];
        if(a == 0){
            if(temp != -1){
                temp++;
            }
        } else {
            if(temp != -1 && temp < k) return false;
            temp = 0;
        }
     }
     return true;   
    }
};