class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int, vector<int>> M;
        for(int i = 0; i < arr.size(); i++){
            M[arr[i]].push_back(i);
        }
        int target = arr.size() - 1;
        queue<int> q;
        q.push(0);
        int step = 0;
        vector<bool> visited(arr.size(), false);
        visited[0] = true;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                int num = q.front();
                q.pop();
                if(num == target){
                    return step;
                }
                if(num > 0){
                    if(!visited[num - 1]){
                        visited[num-1] = true;
                        q.push(num-1);
                    }
                }
                
                if(num < arr.size() - 1){
                    if(!visited[num + 1]){
                        visited[num+1] = true;
                        q.push(num+1);
                    }
                }
                
                if(M[arr[num]].size() >= 2){
                    for(int j = 0; j < M[arr[num]].size(); j++){
                        int idx = M[arr[num]][j];
                        if(!visited[idx]){
                            visited[idx] = true;
                            q.push(idx);
                        }
                    }
                }
                M[arr[num]].clear();
            }
            step++;
        }
        return step;
    }
};