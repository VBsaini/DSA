// Last updated: 5/24/2025, 11:54:02 PM
class Solution {
public:
    const int MOD = 1e9+7;
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n-even;
        long long ans = power(5, even)*power(4, odd)%MOD;
        return ans;
    }

    long long power(long long x,  long long exp){
        if(exp == 0) {
            return 1;
        }
        long long y = (exp&1)?x:1;
        return y*power(x*x%MOD, exp>>1)%MOD;
    } 
};