class Solution {
public:
    int find(int day, vector<int>& dayList){
        if(dayList[day] != day){
            dayList[day] = find(dayList[day], dayList);
        }
        return dayList[day];
    }
    int maxEvents(vector<vector<int>>& events) {
        int ans = 0;
        sort(events.begin(), events.end(), [](vector<int> a, vector<int> b) {
            return a[1] < b[1];
        });
        vector<int> day(events[events.size()-1][1] + 2, 0);
        for (int i = 0; i <= events[events.size()-1][1] + 1; i++) day[i] = i;
        for(auto a : events){
            int start = a[0];
            int end = a[1];
            int availDay = find(start, day);
            if(availDay <= end){
                ans++;
                day[availDay] = find(availDay + 1, day);
            }
        }
        return ans;
    }
};