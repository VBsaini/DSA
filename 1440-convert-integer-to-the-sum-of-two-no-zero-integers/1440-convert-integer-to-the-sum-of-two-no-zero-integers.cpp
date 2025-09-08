class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n; i++){
            int temp = n-i;
            if(to_string(temp).find('0') > n && to_string(i).find('0') > n){
                return {i, temp};
            }
        }
        return {0, 0};
    }
};