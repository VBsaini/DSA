class Solution {
public:
    int possibleStringCount(string word) {
        int ans = 1;
        int temp = 0;
        unordered_map<char, int> M;
        char tc = word[temp];
        for(int i = 1; i < word.size(); i++){
            if(tc == word[i]){
                temp++;
            } else {
                tc = word[i];
                cout << temp;
                ans += temp;
                temp = 0;
            }
        }
        if(temp != 0){
            ans += temp;
        }
        // for(auto [num, count] : M){
        //     if(count > 1){
        //         ans += count - 1;
        //     }
        // }
        return ans;
    }
};