class Solution {
public:
    int minDeletions(string s) {
        map<int, int> M;
        for(auto a : s){
            M[a]++;
        }
        int del = 0;
        vector<int> ex;
        for(auto a : M){
            int val = a.second;
            if(find(ex.begin(), ex.end(), val) == ex.end()){
                ex.push_back(val);
            } else {
                while(val != 0 && find(ex.begin(), ex.end(), val) != ex.end()){
                    cout << val << " ";
                    del++;
                    val--;
                }
                ex.push_back(val);
            }
        }
        return del;
    }
};