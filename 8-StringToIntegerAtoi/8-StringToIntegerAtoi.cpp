// Last updated: 5/24/2025, 11:55:30 PM
class Solution {
public:
    int func(string s, int i, long sum, int sign){
        if(i>s.size() || !isdigit(s[i])) return sign*sum;

        sum = sum*10+(s[i]-'0');
        if(sign*sum>INT_MAX) return INT_MAX;
        if(sign*sum<INT_MIN) return INT_MIN;

        return func(s, i+1, sum, sign);
    }
    int myAtoi(string s) {
        long sum = 0;
        int sign = 1;
        int i = 0;

        while(i<s.length() && s[i] == ' ') i++;
        if(i<s.length() && (s[i] == '-' || s[i] == '+')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        return func(s, i, sum, sign);
    }
};