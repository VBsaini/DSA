class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int ans = INT_MIN;
        int n = energy.size();
        for(int i = n - k; i < n; i++){
          int sum = 0;
          int j = 0;
          for(int j = i; j >= 0; j-=k){
            sum += energy[j];
            ans = max(ans, sum);
          }
        }
        return ans;
    }
};