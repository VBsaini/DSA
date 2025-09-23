class Solution {
public:
    int compareVersion(string a, string b) {
        int lena = a.size();
        int lenb = b.size();
        int i = 0;
        int j = 0;
        while(i < lena || j < lenb){
            int num1 = 0;
            int num2 = 0;
            while(a[i] != '.' && i < a.size()){
                num1 = num1*10 + (a[i] - '0');
                i++;
            }
            while(b[j] != '.' && j < b.size()){
                num2 = num2*10 + (b[j] - '0');
                j++;
            }
            cout << num1 << " " << num2 << " ";
            if(num1 < num2) return -1;
            if(num1 > num2) return 1;

            if (i < lena && a[i] == '.') i++;
            if (j < lenb && b[j] == '.') j++;
        }
        return 0;
    }
};