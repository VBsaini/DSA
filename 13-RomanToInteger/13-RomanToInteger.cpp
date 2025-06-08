// Last updated: 6/8/2025, 12:48:24 PM
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int i = 0;
        int sum = 0;
        int temp = 0;
        for(i=0;i<s.size();i++){
            if(i != s.size() - 1){
                int check = map[s[i]];
                int sec = map[s[i+1]];
                if(check >= sec) {
                    sum += (check);
                } else {
                    sum -= (check);
                }
            } else {
                sum += map[s[s.size()-1]];
            }
        }
        return sum;
    }
};