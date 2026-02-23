class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int sr = s.size() - 1;
        int tr = t.size() - 1;
        while(sr >= 0 || tr >= 0){
            int countS = 0;
            int countT = 0;
            while(sr >= 0){
                if(s[sr] == '#'){
                    countS++;
                    sr--;
                } else if (countS > 0){
                    sr--;
                    countS--;
                } else {
                    break;
                }
            }
            while(tr >= 0){
                if(t[tr] == '#'){
                    countT++;
                    tr--;
                } else if (countT > 0){
                    tr--;
                    countT--;
                } else {
                    break;
                }
            }
            if(sr >= 0 && tr >= 0){
                if(s[sr] != t[tr]){
                    return false;
                }
            } else if(tr >= 0 || sr >= 0) return false;
            sr--;
            tr--;
        }
        cout << sr << " " << tr << endl;
        return true;
    }
};