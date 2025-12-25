class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long count = 0;
        long long ans = 0;
        for(int i = happiness.size() - 1; i >=1 && k != 0; i--){
            count++;
            k--;
            if(happiness[i-1]-count <= 0){
                happiness[i-1] = 0;
            } else {
                happiness[i-1] = happiness[i-1]-count;
            }
            ans += happiness[i];
        }
        if(k != 0){
            ans += happiness[0];
        }
        return ans;
    }
};