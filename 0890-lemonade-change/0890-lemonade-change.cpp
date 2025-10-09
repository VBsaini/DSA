class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a = 0;
        int b = 0;
        int c = 0;
        for(auto bl : bills){
            if(bl == 5){
                a += bl;
            }
            if(bl == 10){
                b += bl;
                a -= 5;
            }
            if(bl == 20){
                c += bl;
                if(b>0){
                    b -= 10;
                    a -= 5;
                } else {
                    a -= 15;
                }
            }
            if(a<0 || b<0 || c<0){
                return false;
            }
        }
        return true;
    }
};