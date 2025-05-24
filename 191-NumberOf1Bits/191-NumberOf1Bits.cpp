// Last updated: 5/24/2025, 11:54:49 PM
class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
        while(n != 0){
            c++;
            n = n & n-1;
        }
        return c;
    }
};