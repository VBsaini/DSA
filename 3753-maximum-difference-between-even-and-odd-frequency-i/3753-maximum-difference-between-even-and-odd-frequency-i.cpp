class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> M;
        for(auto a : s){
            M[a]++;
        }
        int mf = 0;
        int lf = INT_MAX;
        for(auto b : M){
            if(b.second % 2 == 0){
                lf = min(lf, b.second);
            } else {
                mf = max(mf, b.second);
            }
        }
        return mf-lf; 
    }
};