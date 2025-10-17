class Solution {
public:
    int maximumSwap(int num) {
        string n = to_string(num);
        vector<int> last(10, -1);
        for(int i = 0; i < n.size(); i++) {
            int a = n[i] - '0';
            last[a] = i;
        }
        for(int i = 0; i < n.size(); i++) {
            int a = n[i] - '0';
            for(int j = 9; j > a; j--){
                if(last[j] != -1 && last[j] > i){
                    swap(n[i], n[last[j]]);
                    return stoi(n);
                }
            }
        }
        return num;
    }
};