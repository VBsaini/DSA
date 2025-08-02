class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char, int> M;
        for(int i = 0; i < s.size(); i++){
            M[s[i]] = i;
        }
        string ans = "";
        stack<int> st;
        unordered_set<int> inStack;
        for(int i = 0; i < s.size(); i++){
            int ch = s[i];
            if(inStack.count(ch)) continue;
            while(!st.empty() && st.top() > s[i] && M[st.top()] > i) {
                inStack.erase(st.top());
                st.pop();
            }
            st.push(ch);
            inStack.insert(ch);
        }
        while(!st.empty()){
            ans += char(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};