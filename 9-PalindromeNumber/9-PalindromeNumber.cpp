// Last updated: 5/24/2025, 11:55:28 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long int reversed = 0;
        while(temp > 0){
            reversed = reversed*10 + temp%10;
            temp /= 10;
        }
        if(x == reversed){
            return true;
        }
        return false;
    }
};