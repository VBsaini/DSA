class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xAAAAAAAA) == 0;
        return n > 0 && (n & (n-1)) == 0 && (0xAAAAAAAA & n) == 0;
    }
};