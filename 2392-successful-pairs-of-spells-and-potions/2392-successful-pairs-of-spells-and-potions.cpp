class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> ans;
        for (auto a : spells) {
            int i = BSearch(a, potions, success);
            ans.push_back(potions.size() - i);
        }
        return ans;
    }
    int BSearch(int spell, vector<int>& potions, long long success){
        int start = 0;
        int end = potions.size()-1;
        int mid = (start + end)/2;
        int ans = potions.size();
        while(start <= end){
            if((long long)potions[mid]*spell >= success){
                end = mid - 1;
                ans = mid;
            } else {
                start = mid + 1;
            }
            mid = (start + end)/2;
        }
        return ans;
    }
};