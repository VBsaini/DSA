class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> M;
        for(auto a : fruits){
            M[a]++;
        }
        if(M.size() <= 2){
            return fruits.size();
        }
        int i = 0;
        int j = 0;
        int ans = 0;
        M = {};
        while (j < fruits.size()){
            M[fruits[j]]++;
            while(M.size() > 2){
                M[fruits[i]]--;
                if(M[fruits[i]] == 0) {
                    M.erase(fruits[i]);
                }
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;        
    }
};