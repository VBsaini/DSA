class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int H = 0;
        int He = 0;
        int ans = 0;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        while(H < houses.size()){
            while(He + 1 < heaters.size() && abs(houses[H] - heaters[He+1]) <= abs(houses[H] - heaters[He])){
                He++;
            }
            
            int num = abs(houses[H] - heaters[He]);
            ans = max(ans, num);
            
            H++;
        }
        return ans;
    }
};