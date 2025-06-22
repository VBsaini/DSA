class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
      int arr = 0;
      string a = "";
      int check = 0;
      vector<string> ans = {};
      while(arr < s.size()){
        a += s[arr];
        check++;
        arr++;
        if(check == k){
            ans.push_back(a);
            check = 0;
            a = "";
        }
      }
      while(check != k && check != 0){
        a += fill;
        check++;
      }
      if(check != 0){
        ans.push_back(a);
      }
      return ans;
    }
};