class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(auto n : nums) {
            int sum = 0;
            int count = 0;
            for(int i = 1; i*i <= n; i++){
                if(n%i == 0){
                    int j = n/i;
                    if(i == j){
                        count += 1;
                        sum += j;
                    } else {
                        count += 2;
                        sum += j + i;
                    }
                    if(count > 4) break;
                }
            }
            if(count == 4) ans += sum;
        }
        return ans;
    }
};