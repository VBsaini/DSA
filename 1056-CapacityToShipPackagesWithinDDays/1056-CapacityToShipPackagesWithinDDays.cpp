// Last updated: 5/24/2025, 11:54:15 PM
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0;
        int r = 0;
        for(auto a : weights){
            r+=a;
        }
        int ans = -1;
        while(l<=r){
            long long int mid = (l+r)/2;
            int day = calcD(weights, mid);
            if(day == -1){

                l = mid + 1;
            } else {

            if(day <= days){
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
            }
        }
        return ans;
    }
    int calcD(vector<int>& weights, int mid){
        int A = 0;
        int D = 1;
        for(int i = 0;i<weights.size(); i++){
            if(weights[i]>mid){
                return -1;
            }
            if(A+weights[i]>mid){
                D++;
                A = weights[i];
            } else {
                A += weights[i];
            }
        }
        return D;
    }
};