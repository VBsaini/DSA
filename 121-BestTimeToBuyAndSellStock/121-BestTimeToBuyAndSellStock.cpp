// Last updated: 5/24/2025, 11:55:01 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        int maxi = 0;
        int mini = INT_MAX;
        int l = 0;
        int r = prices.size() - 1;
        for(auto a : prices){
            if(mini > a){
                mini = a;
                sum = 0;
            }
            sum = a;
            maxi = max(maxi, sum-mini);
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};