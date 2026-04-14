class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(fast != 1){
            slow = func(slow);
            fast = func(fast);
            fast = func(fast);
            if(fast == slow && slow != 1){
                return false;
            }
        }
        fast = 1;
        return true;
    }

    int func(int n){
        int sum = 0;
        while(n > 0){
            int d = n%10;
            sum = sum + d*d;
            n = n/10;
        }
        return sum;
    }
};