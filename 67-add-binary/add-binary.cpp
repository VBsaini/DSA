class Solution {
public:
    string addBinary(string a, string b) {
        int size = max(a.size(), b.size()) + 1;
        int loop = max(a.size(), b.size());
        string ans = "";
        for(int i = 0; i < size; i++){
            ans += "0";
        }
        int carry = 0;
        int as = a.size() - 1;
        int bs = b.size() - 1;
        for(int i = loop; i >= 0; i--){
            if(as == -1 || bs == -1){
                break;
            }
            int sum = (a[as] - '0') + (b[bs] - '0') + carry;
            if(sum == 3){
                ans[size-1] = '1';
                carry = 1;
            } else if (sum == 2) {
                ans[size-1] = '0';
                carry = 1;
            } else if(sum == 1){
                ans[size-1] = '1';
                carry = 0;
            } else {
                ans[size-1] = '0';
                carry = 0;
            }
            as--;
            bs--;
            size--;
        }
        if(as != -1){
            while(as != -1){
                if(carry == 1){
                    if(a[as] == '1'){
                        carry = 1;
                        ans[size-1] = '0';
                    } else {
                        carry = 0;
                        ans[size-1] = '1';
                    }
                } else {
                    ans[size-1] = a[as];
                }
                size--;
                as--;
            }
        } else if(bs != -1){
            while(bs != -1){
                if(carry == 1){
                    if(b[bs] == '1'){
                        carry = 1;
                        ans[size-1] = '0';
                    } else {
                        carry = 0;
                        ans[size-1] = '1';
                    }
                } else {
                    ans[size-1] = b[bs];
                }
                size--;
                bs--;
            }
        }
        if(carry == 1){
            ans[0] = '1';
        }
        if(ans[0] == '0'){
            ans.erase(ans.begin()); 
        }
        return ans;
    }
};