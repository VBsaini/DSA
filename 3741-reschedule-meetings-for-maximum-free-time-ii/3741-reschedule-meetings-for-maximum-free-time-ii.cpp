class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<vector<int>> interval(n);
        for(int i = 0; i < n; i++){
            interval[i] = {startTime[i], endTime[i]};
        }
        sort(interval.begin(), interval.end());
        vector<int> gap(n + 1);
        gap[0] = interval[0][0];
        for(int i = 1; i < n; i++){
        gap[i] = interval[i][0] - interval[i-1][1];
        }
        gap[n] = eventTime - interval[n-1][1];
        vector<int> maxBefore(n+2, 0);
        vector<int> maxAfter(n+2, 0);
        for(int i = 1; i<=n; ++i){
            maxBefore[i] = max(maxBefore[i-1], gap[i-1]);
        }
        for(int i = n; i>=1; --i){
            maxAfter[i] = max(maxAfter[i+1], gap[i]);
        }

        int maxFree = 0;

        for(int i = 0; i < n; i++){
            int duration = interval[i][1] - interval[i][0];
            int lgap = gap[i];
            int rgap = gap[i+1];
            int combinedGap = lgap + rgap;
            int bestGap = max(maxBefore[i], i < n-1 ? maxAfter[i+2]: 0);
            if(duration <= bestGap){
                maxFree = max(maxFree, combinedGap + duration);
            } else {
                maxFree = max(maxFree, combinedGap);
            }
        }

        for(auto a : gap){
            maxFree = max(maxFree, a);
        }

        return maxFree;
    }
};