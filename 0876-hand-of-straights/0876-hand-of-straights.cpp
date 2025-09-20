class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize != 0){
            return false;
        }
        unordered_map<int, int> M;
        for(auto a : hand){
            M[a]++;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto a : M){
            pq.push(a.first);
        }
        while(!pq.empty()){
            vector<int> T;
            vector<int> C;
            int ci = -1;
            for(int i = 0; i < groupSize; i++){
                if(!pq.empty()){
                    int val = pq.top();
                    pq.pop();
                    M[val]--;
                    if(ci != -1 && C[ci]+1 != val){
                        return false;
                    }
                    C.push_back(val);
                    ci++;
                    if(M[val] != 0){
                        T.push_back(val);
                    }
                } else {
                    return false;
                }
            }
            for(auto a : T){
                pq.push(a);
            }
        }
        return true;
    }
};