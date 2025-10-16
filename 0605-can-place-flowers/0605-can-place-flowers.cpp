class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        if(n == 0) return true;
        int count = n;
        if(fb.size() == 1 && fb[0] == 0 && n == 1){
            return true;
            }
        for(int i = 0; i < fb.size()-1; i++){
            if(fb[i] == 0 && fb[i+1] == 0){
                if(i == 0 || i+1 == fb.size()-1){
                    fb[i] = 1;
                    cout << i << " ";
                    count--;
                } else if(fb[i-1] == 0) {
                    cout << i << " ";
                    fb[i] = 1;
                    count--;
                }
            }
            if(count == 0){
                return true;
            }
        }
        return count == 0;
    }
};