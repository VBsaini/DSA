class Solution {
public:
    int findClosest(int x, int y, int z) {
        int l = abs(z - x);
        int r = abs(z - y);
        if(r == l) return 0;
        return (l < r) ? 1 : 2 ;
    }
};