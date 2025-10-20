class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(auto a : operations){
            if(a == "--X" || a == "X--") {
                ans--;
            } else {
                ans++;
            }
        }
        return ans;
    }
};