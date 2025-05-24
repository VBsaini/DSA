// Last updated: 5/24/2025, 11:54:05 PM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part)< s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};