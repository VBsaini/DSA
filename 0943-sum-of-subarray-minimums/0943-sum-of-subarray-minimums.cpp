class Solution {
public:
    int sumSubarrayMins(vector<int>& A) {
        stack<int> S;
        int i = 0;
        int j = 0;
        vector<int> prev_less(A.size(), -1);
        vector<int> next_less(A.size(), -1);
        stack<int> Nse;
        for(int i = A.size() - 1; i >= 0; i--){
            while(!Nse.empty() && A[Nse.top()] >= A[i]) Nse.pop();
            next_less[i]  = Nse.empty() ? A.size() : Nse.top();
            Nse.push(i);
        }
        stack<int> st;
        for(int i = 0; i < A.size(); i++){
            while(!st.empty() && A[st.top()] > A[i]) st.pop();
            prev_less[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
    int ans = 0, mod = 1e9 +7;
    for(int i = 0; i < A.size(); i++){
        int left = i - prev_less[i];
        int right = next_less[i] - i;
      ans = (ans + 1LL * A[i]*left*right)%mod;
    }
    return ans;
    }
};