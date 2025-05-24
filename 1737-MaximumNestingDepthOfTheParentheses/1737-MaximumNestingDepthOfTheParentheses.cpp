// Last updated: 5/24/2025, 11:54:07 PM
class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                counter++;
            } else if(s[i] == ')'){
                counter--;
            }
            ans = max(ans, counter);
        }
        return ans;
    }
};