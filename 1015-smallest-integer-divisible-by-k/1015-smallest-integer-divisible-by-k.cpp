class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int ans = 0;
        long long rem = 0;
        if(k % 2 == 0 || k%5 == 0) return -1;
        for(int i = 0; i < k; i++){
            rem = (rem * 10 + 1) % k;
            ans += 1;
            if(rem == 0) return ans;
        }
        return -1;
    }
};