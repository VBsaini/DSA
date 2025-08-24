class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0; 
        int j = 0;
        int ans = 0;
        int count = 0;
        int flag = -1;
        while(j < nums.size()){
            if(nums[j] == 0) {
                if(flag == -1){
                    flag = j;
                    count++;
                } else {
                    while(i <= flag){
                        i++;
                        count--;
                    }
                    flag = j;
                    count++;
                }
            } else {
                count++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans-1;
    }
};