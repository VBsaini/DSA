// Last updated: 5/24/2025, 11:54:29 PM
class Solution {
public:
    static bool cmp(pair<char, int>& a, pair<char, int>& b) 
    { 
        return a.second > b.second; 
    } 
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char, int> map;
        for(int i = 0; i < s.length(); i++){
            map[s[i]]++;
        }
        vector<pair<char, int>> A;
        for (auto& it : map) { 
            A.push_back(it); 
        } 
        sort(A.begin(), A.end(), cmp);
        for(auto b : A){
            for(int i = 0; i < b.second; i++){
                ans += b.first;
            }
            cout << b.second;
        }
        return ans;
    }

};