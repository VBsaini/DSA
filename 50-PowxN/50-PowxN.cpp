// Last updated: 5/24/2025, 11:55:14 PM
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0){
            return 1;
        }
        if(n<=-2147483648) {return (x == 1 || x == -1) ? 1 : 0;}
        if (n < 0) {
            n = abs(n);
            x = 1/x;
        } 
        if(n%2 == 0) {
            return myPow(x*x, n/2);
        } else {
            return x * myPow(x, n-1);
        }
    }
};