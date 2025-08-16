class Solution {
public:
    int maximum69Number (int num) {
    //    if(((num + 1) % 10) == 0){
    //     return num;
    //    }
       int temp = num;
       int n = -1;
       int i = 0;
       while(temp != 0){
        int val = temp%10;
        cout << val << " ";
        if(val == 6){
            n = i;
        }
        i++;
        temp = temp / 10;
       }
       if(n == -1){
        return num;
       }
       return num + (3 * pow(10, n));
    }
};