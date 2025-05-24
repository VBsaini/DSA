// Last updated: 5/24/2025, 11:54:53 PM
class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string word = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ' && word != ""){
                temp = word + ' ' + temp;
                word = "";
            } else {
                if(s[i] == ' '){
                    continue;
                }
                word = word + s[i];
            }
        }
        if(word != ""){
                temp = word + ' ' + temp;
                word = "";
        }
        return temp.substr(0, temp.size()-1);
    }
};