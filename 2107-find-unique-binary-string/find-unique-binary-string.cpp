class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<string, int> M;
        for(auto a : nums){
            M[a]++;
        }
        int n = nums.size();
        string ans = Recur(M, n, 0, "");
        return ans;
    }
    string Recur(unordered_map<string, int> M, int n, int len, string str){
        if(n == len){
            if(M.find(str) == M.end()){
                return str;
            }
            str = addOne(str);
            return Recur(M, n, len, str);
        }
        len++;
        str += '0';
        return Recur(M, n, len, str);
    }

    string addOne(string n){
   int carry = 1; // Start with a carry of 1, as we are adding 1
    int i = n.length() - 1; // Start from the rightmost character

    while (i >= 0 || carry) {
        // If within string bounds, add the current bit (converted to integer) and the carry
        int sum = carry;
        if (i >= 0) {
            // Convert character '0' or '1' to integer 0 or 1 using ASCII arithmetic
            sum += n[i] - '0';
        }

        // The current bit of the result is sum % 2
        // Convert the result bit back to a character and place it in the string
        if (i >= 0) {
            n[i] = (sum % 2) + '0';
        } else {
            // If we've processed all original digits but still have a carry, prepend a '1'
            n.insert(0, 1, (sum % 2) + '0');
        }

        // The new carry is sum / 2 (integer division)
        carry = sum / 2;

        // Move to the next position to the left
        i--;
    }

    // This implementation modifies the string in place or prepends if necessary.
    // An alternative approach builds a result string in reverse order and then reverses the whole result.
    return n;
    }
};