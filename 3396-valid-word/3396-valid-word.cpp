class Solution {
public:
    bool isValid(string word) {
        vector<int> V = {'a', 'e', 'i', 'o', 'u'};
        if(word.size() < 3){
            return false;
        }
        int Vi = 0;
        int Ci = 0;
        for(int i = 0; i < word.size();i++){
            int C = word[i];
            if(((C >= 33 && C <= 47) || (C >= 58 && C <= 64))){
                return false;
            }
            if(Vi != 1 && find(V.begin(), V.end(), tolower((char)word[i])) != V.end()){
                Vi = 1;
            }
            if(Ci != 1 && ((C >= 97 && C <= 122) || C >= 65 && C <= 90)){
                if(find(V.begin(), V.end(), tolower((char)word[i])) == V.end()){
                    Ci = 1;
                }
            }
        }
        cout << Ci << " " << Vi;
        if(Ci == 1 && Vi == 1){
            return true;
        } else {
            return false;
        }
    }
};