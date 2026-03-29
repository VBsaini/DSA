class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        bool s0b = (s1[0] == s2[0] || s1[0] == s2[2]);
        bool s1b = (s1[1] == s2[1] || s1[1] == s2[3]);
        bool s2b = (s1[2] == s2[2] || s1[2] == s2[0]);
        bool s3b = (s1[3] == s2[3] || s1[3] == s2[1]);
        if(s0b && s1b && s2b && s3b){
            return true;
        } else {
            return false;
        }
    }
};