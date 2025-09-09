class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> M;
        M['a'] = -1;
        M['b'] = -1;
        M['c'] = -1;
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j < s.size()){
            if(s[j] == 'a' || s[j] == 'b' || s[j] == 'c'){
                M[s[j]] = j;
            }
            int a = M['a'];
            int b = M['b'];
            int c = M['c'];
            // if(a <= b){
            //     if(a < c){
            //         ans += c + 1;
            //     } else {
            //         ans += a + 1;
            //     }
            // } else {
            //     if(b < c){
            //         ans += b + 1;
            //     } else {
            //         ans += c + 1;
            //     }
            // }
            ans += min({a, b, c}) + 1;
            j++;
        }
        return ans;
    }
};