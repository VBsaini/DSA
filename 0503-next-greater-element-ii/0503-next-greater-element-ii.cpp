class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int N = nums.size();
        vector<int> n(N, -1);
        for(int i = (2 * N) -1; i >= 0; i--){
            int index = i % N;
            int val = nums[index];
            while(!st.empty() && st.top() <= val){
                st.pop();
            }
            if(i < N){
                n[i] = st.empty() ? -1 : st.top();
            }
            st.push(val);
        }
        return n;
    }
};