class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> result, curr;
        for(auto x : arr){
            unordered_set<int> next;
            next.insert(x);
            for(auto y : curr){
                next.insert(x | y);
            }
            curr = next;
            result.insert(next.begin(), next.end());
        }
        return result.size();
    }
};