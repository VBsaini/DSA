class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int n = total/cost1;
        if(total < cost1){
            if(total < cost2){
                return 1;
            } else {
                return (total/cost2) + 1;
            }
        }
        long long ans = 0;
        for(int i = 0 ; i <= n; i++){
            ans += ((total - i*cost1)/cost2) + 1;
        }
        return ans;
    }
};