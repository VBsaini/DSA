class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int, int> freqNext;
        unordered_map<int, int> freqPrev;
        int mod = 1e9+7;
        long long ans = 0;
        for(int i = 1; i < nums.size(); i++){
            freqNext[nums[i]]++;
        }
        freqPrev[nums[0]]++;
        for(int j = 1; j < nums.size(); j++){
            freqNext[nums[j]]--;
            if(freqNext[nums[j]] == 0){
                freqNext.erase(nums[j]);
            }
            int num = nums[j] * 2;
            if(freqNext.find(num) != freqNext.end() && freqPrev.find(num) != freqPrev.end()){
                ans += (long long)freqNext[num]*freqPrev[num];
            }
            freqPrev[nums[j]]++;
        }
        return ans%mod;
    }
};