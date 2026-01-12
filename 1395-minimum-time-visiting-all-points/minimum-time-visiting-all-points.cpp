class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i = 1; i < points.size(); i++){
            int P1X = points[i-1][0];
            int P1Y = points[i-1][1];
            int P2X = points[i][0];
            int P2Y = points[i][1];

            int maxT = max(abs(P1X - P2X), abs(P1Y - P2Y));
            cout << maxT << " ";
            ans += maxT;
        }
        return ans;
    }
};