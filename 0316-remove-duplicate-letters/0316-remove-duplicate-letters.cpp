class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        unordered_map<char, int> M;
        for(int i = 0; i < s.size();i++){
            M[s[i]] = i;
        }
        unordered_set<int> inStack;
        for(int i = 0; i < s.size(); i++){
            if(inStack.count(s[i])) continue;
            while(!st.empty() && M[st.top()] > i && st.top() > s[i]){
                inStack.erase(st.top());
                st.pop();
            }
            inStack.insert(s[i]);
            st.push(s[i]);
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};