class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        int maxDay = 0;
        for(auto a : days){
            maxDay = max(maxDay, a);
        }
        vector<int> dp(maxDay+1, 0);
        for(int i = 1; i <= maxDay; i++){
            if(count(days.begin(), days.end(), i) != 0){
                int opt1 = costs[0] + dp[i-1];
                int opt2 = costs[1] + dp[max(0, i-7)];
                int opt3 = costs[2] + dp[max(0, i-30)];
                dp[i] = min({opt1, opt2, opt3});
            } else {
                dp[i] = dp[i-1];
            }
        }
        return dp[maxDay];
    }
};