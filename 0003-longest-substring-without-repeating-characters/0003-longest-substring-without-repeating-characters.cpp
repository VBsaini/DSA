class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int l = 0;
        int r = 0;
        int n = s.length();
        int maxLen = 0;

        while(r<n){
            if(m.find(s[r]) != m.end()){
                l = max(l, m[s[r]]+1);
            }
            int len = r-l+1;
            maxLen = max(maxLen, len);
            m[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};