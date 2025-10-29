class Solution {
public:
    int smallestNumber(int n) {
     int temp = n;
     int ans = 0;
     int flag = 1;
     int cnt = 0;
     while(temp != 0){
        cnt++;
        cout << temp << " ";
        if(temp%2 == 0 || temp == 1){
            ans += pow(2, cnt);
        } else {
            flag = 0;
            ans += pow(2, cnt);
        }
        temp = temp >> 1;
     }   
     return ans/2;
    }
};