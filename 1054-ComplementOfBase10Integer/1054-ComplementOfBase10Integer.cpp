// Last updated: 5/24/2025, 11:54:16 PM
class Solution {
public:
    int bitwiseComplement(int n) {
        int answer = 0;
        int base = 1;
        do{
            int bit = ~n&1;
            answer += bit * base;
            n = n>>1;
            base = base * 2;
        }
        while(n != 0);
        return answer;
    }
};