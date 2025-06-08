// Last updated: 6/8/2025, 12:47:27 PM
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int r = 0;
        int l = 0;
        for(int i = 1; i <= n; i++){
            if(i%m == 0){
                l += i;
            } else {
                r += i;
            }
        }
        return r - l;
    }
};