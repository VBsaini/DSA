class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int sum = 0;
        while(temp > 0){
            int rem = temp%10;
            sum = sum*10 + rem;
            temp = temp/10;
        }

        return abs(sum - n);
    }
};