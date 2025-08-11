class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0; 
        int j = 0;
        string vow = "aeiou";
        int ans = 0;
        int maxAns = 0;
        int temp = 0;
        while(j < s.size()){
            if(temp == k){
                temp--;
                if(find(vow.begin(), vow.end(), s[i]) != vow.end()){
                    ans--;
                }
                i++;
            }
            if(find(vow.begin(), vow.end(), s[j]) != vow.end()){
                ans += 1;
            }
            maxAns = max(ans, maxAns);
            j++;
            temp++;
        }
        return maxAns;
    }
};