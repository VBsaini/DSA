// Last updated: 5/24/2025, 11:54:23 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        return ((s+s).find(goal) != -1);
    }
};