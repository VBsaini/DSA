// Last updated: 5/24/2025, 11:55:00 PM
class Solution {
  bool isValid(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
      return true;
    }
    return false;
  }
  public: bool isPalindrome(string s) {
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
      if (isValid(s[i])) {
        temp.push_back(tolower(s[i]));
      }
    }
    int t = 0;
    int e = temp.length() - 1;
    while (t < e) {
      if (temp[t] != temp[e]) {
        return false;
      }
      t++;
      e--;
    }
    return true;
  }
};