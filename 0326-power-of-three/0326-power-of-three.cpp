class Solution {
public:
    bool isPowerOfThree(int n) {
       long long temp = 3;
       if(n == 1){
        return true;
       }
       while(temp <= n){
        if(temp == n){
            return true;
        }
        temp = temp * 3;
       }
       return false;
    }
};