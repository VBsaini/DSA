class Solution {
public:
    char kthCharacter(int k) {
        return 'a' + popcount((uint)k - 1);
    }
};