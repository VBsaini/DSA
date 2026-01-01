class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int ele = digits.size()-1;
       while(ele >= 0 && digits[ele] == 9){
        digits[ele] = 0;
        ele--;
       }
       if(ele == -1){
            digits.insert(digits.begin(), 1);
        } else {
            digits[ele]++;
        }
        return digits;
    }
};