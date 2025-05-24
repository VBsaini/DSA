// Last updated: 5/24/2025, 11:54:12 PM
class Solution {
public:
    string removeDuplicates(string s) {
        bool all = true;
        while(all){
            bool one = false;
            if(s.length() == 0){
                return s;
            }
            for(int i = 0; i < s.length()-1; i++){
                if(s[i+1] == s[i]){
                    s.erase(i, 2);
                    one = true;
                    break;    
                }
            }
            if(!one){
            all = false;
            }
        }
        return s;
    }
};