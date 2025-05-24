// Last updated: 5/24/2025, 11:54:48 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char, char> imap;
       for(int i = 0; i < s.size(); i++){
        if(imap.count(s[i])){
            if(imap[s[i]] != t[i]){
                return false;
            }
        } else {
            for (auto& pair: imap){
                if(pair.second == t[i]){
                    return false;
                }
            }
            imap[s[i]] = t[i];
        }
       } 
        return true;
    }
};