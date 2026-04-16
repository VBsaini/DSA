class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int, vector<int>> have;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int a = nums[i];
            have[a].push_back(i);
        }
        vector<int> dist(n, -1);
        for(auto a : have){
            int ele = a.first;
            vector<int> occ = a.second;
            int k = occ.size();
            if(k == 1) continue;
            
            for(int i = 0; i < k; i++){
                int curr = occ[i];
                int next = occ[(i + 1) % k];
                int prev = occ[(i - 1 + k) % k];

                int d1 = (next - curr + n) % n;   // forward
                int d2 = (curr - prev + n) % n;   // backward

                dist[curr] = min(d1, d2);
            }
        }
        vector<int> ans;
        for(auto a : queries){
            ans.push_back(dist[a]);
        }
        return ans;
    }
};