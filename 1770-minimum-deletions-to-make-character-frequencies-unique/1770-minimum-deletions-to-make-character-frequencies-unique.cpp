class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        sort(freq.rbegin(), freq.rend()); 

        int deletions = 0;
        int maxAllowed = freq[0]; 

        for (int i = 1; i < 26; i++) {
            if (freq[i] == 0) break;  
            maxAllowed = max(0, min(maxAllowed - 1, freq[i]));

            deletions += freq[i] - maxAllowed;
        }

        return deletions;
    }
};