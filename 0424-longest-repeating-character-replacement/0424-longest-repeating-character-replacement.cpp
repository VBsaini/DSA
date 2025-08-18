class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> M;
        int n = s.size();
        int i = 0;
        int j = 0;
        int maxA = 0;
        int maxCount = 0;
        while(j<n){
            M[s[j]]++;
            maxCount = max(maxCount, M[s[j]]);
            while((j-i+ 1) - maxCount > k){
                M[s[i]]--;
                i++;
            }
            maxA = max(maxA, j-i+1);
            j++;
        }
        return maxA;
    }
};