class Solution {
public:
    int sumSubarrayMins(vector<int>& A) {
        stack<int> S;
        int i = 0;
        int j = 0;
        vector<int> prev_less(A.size(), -1);
        vector<int> next_less(A.size(), -1);
        for(int i = 0; i < A.size(); i++) prev_less[i] =  i + 1;
        for(int i = 0; i < A.size(); i++) next_less[i] = A.size() - i;
        while(j < A.size()){
            while(!S.empty() && A[S.top()] > A[j]) {
                auto x = S.top();
                next_less[x] = j - x;
                S.pop();
            }
            prev_less[j] = S.empty() ? j+1 :j - S.top();
            S.push(j);
            j++;
        }
    int ans = 0, mod = 1e9 +7;
    for(int i = 0; i < A.size(); i++){
      ans = (ans + 1LL * A[i]*prev_less[i]*next_less[i])%mod;
    }
    return ans;
    }
};