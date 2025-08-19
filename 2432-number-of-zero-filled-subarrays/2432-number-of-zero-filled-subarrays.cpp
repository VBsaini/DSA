class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int i=0;
        long long result=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]==0){
                count++;
                i++;
                continue;
            }
            if(count!=0){
                result+=(long long)count*(count+1)/2;
                count=0;
            }
            i++;
        
        }
        if(count!=0){
                result+=(long long)count*(count+1)/2;
                count=0;
            }
        return result;
    }
};