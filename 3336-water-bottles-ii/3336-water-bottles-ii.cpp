class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        int empB = numBottles;
        while(empB >= 0){
            if(empB - numExchange >= 0){
                ans += 1;
                empB = empB - numExchange;
                numExchange++;
                empB++;
            } else {
                break;
            }
        }
        return ans;
    }
};