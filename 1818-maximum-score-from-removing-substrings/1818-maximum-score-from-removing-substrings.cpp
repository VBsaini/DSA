class Solution {
public:
    int maximumGain(string s, int x, int y) {
     int ans = 0;
     string check;
     if(x>y){
        check="ab";
     } else {
        check="ba";
     }
     string temp = "";
     stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() && st.top() == check[0] && s[i] == check[1]){
                ans += max(x, y);
                st.pop();
                temp.pop_back();
            } else {
                temp += s[i];
                st.push(s[i]);
            }
        }
        st = {};
        string otherCheck = (check == "ab") ? "ba" : "ab";
        for(int i = 0; i < temp.size(); i++){
            if(!st.empty() && st.top() == otherCheck[0] && temp[i] == otherCheck[1]){
                ans += min(x, y);
                st.pop();
            } else {
                st.push(temp[i]);
            }
        }
        return ans;
    }
};