class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                int rS = 0;
                for(int j = i+1; j < nums.size(); j++){
                    rS += nums[j];
                }
                if(count == rS){
                    ans+=2;
                } else if(count+1 == rS || count == rS+1){
                    cout << i << " ";
                    ans+=1;
                }
            }
            count += nums[i];
        }
        return ans;
    }
};