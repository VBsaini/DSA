class Solution {
public:

    void backtrack(int n, vector<string>& ans, int open, int close, string curr){
        if(curr.size() == 2*n){
            ans.push_back(curr);
            return;
        }
        if(open < n) backtrack(n, ans, open+1, close, curr + "(");
        if(close < open) backtrack(n, ans, open, close+1, curr + ")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(n, ans, 0, 0, "");
        return ans;
    }
};