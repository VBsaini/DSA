class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(auto a : sentences){
            int num = 1;
            for(auto b : a){
                if(b == ' '){
                    num++;
                }
            }
            ans = max(num, ans);
        }
    return ans;
    }
};