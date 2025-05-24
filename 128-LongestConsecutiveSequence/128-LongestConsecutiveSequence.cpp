// Last updated: 5/24/2025, 11:54:58 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> st;
       int n = nums.size();
       if(n == 0){
        return 0;
       }
       int longest = 1;
       for(int a = 0; a<n; a++){
        st.insert(nums[a]);
       }
       for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }
       }
       return longest;
    }
};