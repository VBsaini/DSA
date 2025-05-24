// Last updated: 5/24/2025, 11:54:40 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> temps;
        unordered_map<char, int> tempt;
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++){
                temps[s[i]]++;
                tempt[t[i]]++;
        }
        return temps == tempt;
    }
};