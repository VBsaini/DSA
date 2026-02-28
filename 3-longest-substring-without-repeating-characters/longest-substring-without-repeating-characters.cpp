class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int k = 0;
        int ans = 0;
        unordered_map<char, int> M;
        for(int h = 0; h < s.size(); h++){
            M[s[h]]++;
            k = h - l + 1;
            while(M.size() < k){
                M[s[l]]--;
                if(M[s[l]] == 0) M.erase(s[l]);
                l++;
                k = h - l + 1;
            }
            ans = max(ans, h - l + 1);
        }
        return ans;
    }
};