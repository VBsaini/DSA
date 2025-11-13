class Solution {
public:
    int maxOperations(string s) {
        int ans = 0;
        int flag = 0;
        int temp = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                temp++;
            } else {
                if((i + 1 < s.size() && s[i+1] == '1') || i+1 == s.size()) ans += temp;
            }
        }
        return ans;
    }
};