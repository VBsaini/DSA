class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int count = 1;
        for(int i = 1; i <= n; i++){
            ans += count;
            count++;
            if(i%7 == 0){
                count = (int)i/7 + 1;
            }
        }
        return ans;
    }
};