class Solution {
public:
    int countCollisions(string D) {
        int i = 0;
        int j = D.size() - 1;
        while( i < D.size() && D[i] == 'L') i++;
        while(j >= 0 && D[j] == 'R') j--;
        int col = 0;
        for(int k = i; k <= j; k++){
           if(D[k] != 'S') col++;
        }
        return col;
    }
};