// Last updated: 5/24/2025, 11:54:14 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string temp = "";
        int c = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ')'){
                c--;
            }
            if(c != 0){
                temp += s[i];
            }
            if(s[i] == '('){
                c++;
            } 
            
        }
        return temp;
    }
};