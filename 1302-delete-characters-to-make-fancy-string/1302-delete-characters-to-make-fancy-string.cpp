class Solution {
public:
    string makeFancyString(string s) {
        char a = 'a';
        string ans = "";
        int temp = 0;
        for(auto b : s){
            if(a == b){
                temp++;
                if(temp == 3){
                    temp--;
                    ans.pop_back();
                }
            } else {
                temp = 1;
                a = b;
            }
            ans.push_back(b);
        }
        return ans;
    }
};