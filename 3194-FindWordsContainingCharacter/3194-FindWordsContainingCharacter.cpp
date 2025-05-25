// Last updated: 5/26/2025, 3:14:09 AM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans = {};
        int j = 0;
        for(auto s: words){
            if(count(s.begin(), s.end(), x)){
                ans.push_back(j);
            }
            j++;
        }
        return ans;
    }
};