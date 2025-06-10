class Solution {
public:
    vector<int> lexicalOrder(int n) {
        int count = 1;
        vector<int> a;
        for(int i = 0; i < n; i++){
            a.push_back(count);
            if(count * 10 <= n){
                count *= 10;
            } else {
                if(count >= n) count /= 10;
                count++;
                while(count % 10 == 0) {
                    count /= 10;
                    };
            }
        }
        return a;
    }
};