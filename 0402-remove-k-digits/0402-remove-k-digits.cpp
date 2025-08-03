class Solution {
public:
    string removeKdigits(string num, int k) {
        int temp = k;
        stack<char> st;
        if(num.size() == k){
            return "0";
        }
        for(int i = 0; i < num.size(); i++){
            while(!st.empty() && temp != 0 && st.top() > num[i]) {
                st.pop();
                temp -= 1;
            }
            st.push(num[i]);
        }
        while (temp > 0 && !st.empty()){
            st.pop();
            temp--;
        }
        string ans = "";
        bool leadZeroFlag = false;
        while(!st.empty()){
            cout << st.top() << " ";
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        int i = 0;
        while(ans[i] == '0') i++;
        ans.erase(0, i);
        return ans == "" ? "0" : ans;
    }
};