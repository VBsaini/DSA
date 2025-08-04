class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> st;
        vector<int> NGL(t.size());
        vector<int> ans(t.size());
        for(int i = t.size() - 1; i >= 0; i--){
            while(!st.empty() && t[st.top()] <= t[i]){
                st.pop();
            }
            NGL[i] = st.empty() ? 0 :  st.top() - i;
            st.push(i);
        }
        for(auto a : NGL){
            cout << a << " ";
        }
        return NGL;
    }
};