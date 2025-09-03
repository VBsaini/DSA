class Solution {
    int atMost(vector<int>& nums, int k){
                int i = 0; 
        int j = 0;
        int count = 0;
        int ans = 0;
        while(j < nums.size()){
            if(nums[j]%2 == 1){
                count++;
            }
            while(count > k){
                if(nums[i]%2 == 1){
                    count--;
                }   
                i++;
            }
            ans += (j - i + 1);   
            
            j++;
        }
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int r = atMost(nums, k);
        int l = atMost(nums, k-1);
        return r-l;
    }
};