class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char, int> M;
        for(char a : brokenLetters){
            M[a]++;
        }
        int ans = 0;
        int temp = 1;
        for(char c : text){
            if(M.count(c)){
                temp = 0;
            }
            if(c == ' '){
                ans += temp;
                temp = 1;
            }
        }
        ans += temp;
        return ans;
    }
};