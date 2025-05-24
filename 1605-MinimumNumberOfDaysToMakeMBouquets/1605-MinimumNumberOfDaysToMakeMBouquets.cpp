// Last updated: 5/24/2025, 11:54:10 PM
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans = -1;
        int l = 1;
        int r = *max_element(bloomDay.begin(), bloomDay.end());
        while(l<=r){
            int mid = l + (r-l)/2;
            int calb = calcB(bloomDay, mid, k);
            if(calb == m){
                ans = mid;
                r = mid - 1;
            } else if(calb > m){
                ans = mid;  
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
    int calcB(vector<int>& bloomDay, int limit, int k){
        int b = 0;
        int c = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= limit){
                // if(i == 0){
                    c += 1;
                // } else {
                    // if(bloomDay[i-1] <= limit)
                // }
                if(c>=k){
                    b++;
                    c = 0;
                }
            } else {
                c = 0;
            }
        }
        return b;
    }
};