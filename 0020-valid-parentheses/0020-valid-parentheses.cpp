class Solution {
public:
    bool isValid(string s) {
        stack<char> start;
        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(pairs.count(s[i])){
                if(start.empty() || start.top() != pairs[s[i]]) return false;
                start.pop();
            } else{
                start.push(s[i]);
            }
        }
        return start.empty();

    }
};