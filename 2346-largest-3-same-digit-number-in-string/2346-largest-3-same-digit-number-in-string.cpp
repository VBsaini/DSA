class Solution {
public:
    string largestGoodInteger(string num) {
        char lastC = num[0]; 
        int j = 0; 
        int maxA = -1;
        string temp = "";
        int count = 0;
        while(j < num.size()){
            if(lastC == num[j]){
                count++;
                temp += num[j];
                if(count == 3){
                    maxA = max(maxA, stoi(temp));
                }
            } else {
                lastC = num[j];
                count = 1;
                temp = num[j];
            }
            j++;
        }
        if(maxA == 0){
            return "000";
        }
        return maxA == -1 ? "" : to_string(maxA);
    }
};