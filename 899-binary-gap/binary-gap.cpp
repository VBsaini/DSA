class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        string bits = "";
        while(n != 0){
            bits += to_string(n%2);
            n /= 2;
        }
        int l = -1;
        for(int i = 0; i < bits.size(); i++){
            if(l == -1 && bits[i] == '1'){
                l = i;
            } else if(l != -1 && bits[i] == '1'){
                ans = max(ans, i-l);
                l = i;
            }
        }
        return l == -1 ? 0 : ans;
    }
};