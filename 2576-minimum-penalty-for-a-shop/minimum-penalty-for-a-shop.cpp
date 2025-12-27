class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> PF(n+1, -1);
        int ans = 0;
        int max = 0;
        for(auto a : customers){
            if(a=='N'){
                max++;
            }
        }
        PF[n] = max;
        for(int i = n-1; i>=0; i--){
            if(customers[i] == 'Y'){
                PF[i] = ++max;
            } else {
                PF[i] = --max;
            }
        }
        for(int i = 1; i < PF.size(); i++){
            if(PF[ans] > PF[i]){
                ans = i;
            }
        }
        if(ans == PF.size() - 1 && customers[ans] == 'Y'){
            ans++;
        }
        return ans;
    }
};