// Last updated: 5/24/2025, 11:54:20 PM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int ans = 0;
        sort(piles.begin(), piles.end());
        // int r = piles[piles.size()-1];
        int r=*max_element(piles.begin(),piles.end());
        while(l<=r){
            int mid = (r+l)/2;
            long long asd = countT(mid, piles);
            if(asd <= h){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
    long long countT(int mid, vector<int>& piles){
        long long totalT = 0;
        for(int i = 0; i < piles.size();i++){
            totalT += ceil((double)piles[i] / (double)mid);
            // if(piles[i]%mid) totalT++;
        }
        return totalT;
    }
};