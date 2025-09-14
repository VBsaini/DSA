class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> M;
        unordered_map<char, int> Need;
        int formed = 0;
        int required = 0;
        int minLen = INT_MAX, start = 0;
        for(int i = 0; i < t.size(); i++){
            if(Need.find(t[i]) == Need.end()){
                required++;
            }
            Need[t[i]]++;
        }
        int i = 0;
        int j = 0;
        while(j < s.size()){
            char c = s[j];
            M[c]++;
            if(Need.count(c) && Need[c] == M[c]){
                formed++;
            }
            while(formed == required){
                if(minLen > j-i+1){
                    start = i;
                    minLen = j-i+1;
                }
                char el = s[i];
                M[el]--;
                if(M[el] < Need[el]){
                    formed--;
                }
                i++;
            }
            j++;
        }
        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};