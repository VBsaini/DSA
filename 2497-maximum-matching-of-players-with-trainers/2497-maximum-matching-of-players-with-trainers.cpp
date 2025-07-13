class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j < trainers.size()){
            if(i < players.size() && players[i] <= trainers[j]){
                ans++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return ans;
    }
};