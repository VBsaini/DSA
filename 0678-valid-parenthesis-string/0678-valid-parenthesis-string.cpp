class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0;
        int rightMin = 0;
        for(auto a : s){
            if(a == '('){
                leftMin++;
                rightMin++;
            } else if (a == ')'){
                leftMin = max(leftMin - 1, 0);
                rightMin--;
            } else {
                leftMin = max(leftMin - 1, 0);
                rightMin++;
            }        
            if(rightMin < 0) return false;
            leftMin = max(leftMin, 0);
            
        }
        
        return leftMin == 0;
    }
};