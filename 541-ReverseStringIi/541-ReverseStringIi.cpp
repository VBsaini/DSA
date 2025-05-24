// Last updated: 5/24/2025, 11:54:27 PM
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.length(); i += 2*k){
            int st = i, e = (st + k - 1 < s.length() - 1) ? st + k - 1 : s.length() - 1;
            while(st<e){
                swap(s[st++], s[e--]);
            }
        }   
    return s;
        }
    // }
};