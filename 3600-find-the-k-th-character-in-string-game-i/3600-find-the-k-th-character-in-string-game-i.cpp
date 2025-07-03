class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        string temp = "";
        int i = 0;
        while(word.size() < k){
            for(int j = 0; j < word.size();j++){
                char ch = word[j] + 1;
                if(word[j] == 'z'){
                    ch = 'a';
                }
                temp += ch;
            }
            word += temp;
            temp = "";
        }
        return word[k-1];
    }
};