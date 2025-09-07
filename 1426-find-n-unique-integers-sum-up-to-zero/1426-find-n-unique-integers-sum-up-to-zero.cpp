class Solution {
public:
    vector<int> sumZero(int n) {
        if(n == 1){
            return {0};
        }
        int S = 0;
        int val = 1;
        vector<int> temp;
        if(n%2 == 1){
            n = n - 1;
            temp.push_back(0);
        }
        for(int i = 0; i < n; i++){
            int valA;
            if(S == 0){
                valA = val;
            } else {
                valA = 0 - val;
            }
            if(S == 1){
                S = 0;
                val++;
            } else {
                S = 1;
            }
            temp.push_back(valA);
        }
        return temp;
    }
};