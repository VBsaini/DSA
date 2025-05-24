// Last updated: 5/24/2025, 11:53:57 PM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int j = start;
        int k = goal;
        int ans = 0;
        while(j != 0 || k != 0){
            if((j  & 1) == 1){
                if((k & 1) == 1){
                    ans--;
                }
            } else {
                if((k & 1) == 0){
                    ans--;
                }
            }
            ans++;
            j=j>>1;
            k=k>>1;
        }
        return ans;     
    }
};