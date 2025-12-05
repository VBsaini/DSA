class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(auto a : nums){
            sum += a;
        }
        int part = 0;
        int temp = 0;
        for(int i = 0; i < nums.size()-1; i++){
            temp += nums[i];
            if((temp - (sum - temp))%2 == 0){
                part++;
            }
        }
        return part;
    }
};