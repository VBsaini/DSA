// Last updated: 5/24/2025, 11:54:35 PM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans = {};
        for(int i = 0; i <= n; i++){
            int num = i;
            int sum = 0;
            while(num != 0){
                int remainder = num%2;
                sum = sum + remainder;
                num = num/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};