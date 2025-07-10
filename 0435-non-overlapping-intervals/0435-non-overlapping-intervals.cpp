class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){
            return b[1] > a[1];
        });
        int count = 1;  
        int prev = 0;  
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] >= intervals[prev][1]){
                count++;
                prev = i;
            }
        }
        return intervals.size() - count;
    }
};