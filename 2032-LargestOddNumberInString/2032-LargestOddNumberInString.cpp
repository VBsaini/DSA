// Last updated: 5/24/2025, 11:54:03 PM
class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.size();
        for(int i = num.size() - 1; i >= 0; i--){
            if((num[i] - '0') % 2 != 0){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};