// Last updated: 5/24/2025, 11:54:18 PM
class Solution {
public:
    int fib(int n) {
        if(n <= 1){
            return n;
        }
        int last = fib(n-1);
        int sndLast = fib(n-2);
        return last + sndLast;
    }
};