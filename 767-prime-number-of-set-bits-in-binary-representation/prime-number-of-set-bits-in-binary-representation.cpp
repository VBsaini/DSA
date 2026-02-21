class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int> Prime = {2, 3, 5, 7, 11, 13, 17, 19};
        int ans = 0;
        for(int i = left; i <= right; i++){
            if(find(Prime.begin(), Prime.end(), __builtin_popcount(i)) != Prime.end()){
                ans++;
            }
        }
        return ans;
    }
    int countBits(int number){
        int bits = 0;
        while(number != 0){
            int rem = number%2;
            if(rem == 1){
                bits++;
            }
            number /= 2;
        }
        return bits;
    }
};