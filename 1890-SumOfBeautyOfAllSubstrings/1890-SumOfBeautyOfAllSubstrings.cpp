// Last updated: 6/8/2025, 12:47:35 PM
class Solution {
public:
    int beautySum(string s) {
        unordered_map<char,int> m;
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
            for (int j = i + 1; j < s.size(); j++) {
                m[s[j]]++;
                int min = INT_MAX;
                int mx = INT_MIN;
                for(auto i: m){
                    if(i.second > mx){
                        mx= i.second;
                    }
                    if(i.second < min){
                        min = i.second;
                    }
                }
                res+=mx - min;
            }
            m.clear();
        }

        return res;
    }
};