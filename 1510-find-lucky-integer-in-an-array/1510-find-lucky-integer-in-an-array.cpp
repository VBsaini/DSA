class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;

        unordered_map<int, int> M;
        for(int i = 0; i < arr.size(); i++){
            M[arr[i]]++;
        }
        for(auto a : arr){
            if(M[a] == a){
                ans = max(ans, a);
            }            
        }
        return ans;
    }
};