class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0;
        for(int i = 0; i < gas.size(); i++){
            ans += (gas[i] - cost[i]);
        }
        if(ans < 0){
            return -1;
        }
        int sum = 0;
        ans = 0;
        for(int i = 0; i < gas.size(); i++){
            sum += (gas[i] - cost[i]);
            if(sum < 0){
                ans = i + 1;
                sum = 0;
            }
        }
        return ans;
    }
};