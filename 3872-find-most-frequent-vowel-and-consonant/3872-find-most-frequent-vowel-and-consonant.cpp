class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> M;
        unordered_map<char, int> V;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                V[s[i]]++;
            } else {
                M[s[i]]++;
            }
        }
        int tempM = 0;
        int tempV = 0;
        for(auto ele : M){
            if(ele.second > tempM){
                tempM = ele.second;
            }
        }
        for(auto ele : V){
            if(ele.second > tempV){
                tempV = ele.second;
            }
        }
        return tempV + tempM;
    }
};