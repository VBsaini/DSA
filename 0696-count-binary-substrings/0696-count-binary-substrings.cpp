class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> ansA;
        int temp = 0;
        int test = s[0];
        for(int i = 0; i < s.size(); i++){
            if(s[i] == test){
                temp++;
            } else {
                test = s[i];
                ansA.push_back(temp);
                temp = 1;
            }
        }
        ansA.push_back(temp);
        int ans = 0;
        for(int i = 0; i < ansA.size()-1;i++){
            ans += min(ansA[i], ansA[i+1]);
        }
        return ans;   
    }
};