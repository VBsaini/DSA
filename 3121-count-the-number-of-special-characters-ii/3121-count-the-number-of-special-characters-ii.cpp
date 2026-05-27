class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int, pair<int, int>> M;
        // 65 A
        // 97 a
        int ans = 0;
        for(int i = 0; i < word.size(); i++){
            if(word[i] >= 97){
                if(M.find(word[i]) != M.end()){
                    M[word[i]].second = i;
                } else {
                    M[word[i]] = {i, i};
                }
            }
        }
        for(int i = 0; i < word.size(); i++){
            char a = word[i];
            if((int)a < 96){
                char al = a + 32;
                if(M.find(al) != M.end()){
                    int fidx = M[al].first;
                    int lidx = M[al].second;
                    if(lidx < i){
                        ans++;
                    }
                    M.erase(al);
                }
            }
        }
       return ans; 
    }
};