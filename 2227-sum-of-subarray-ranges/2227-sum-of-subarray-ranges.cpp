class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> next_less(n);
        vector<int> prev_less(n);
        vector<int> next_big(n);
        vector<int> prev_big(n);
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]) st.pop();
            next_less[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        st = {};
        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] > nums[i]) st.pop();
            prev_less[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        st = {};
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] < nums[i]) st.pop();
            next_big[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        st = {};
        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            prev_big[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        long long ans = 0;
        for(int i = 0; i < n; i++){
            int left = i - prev_less[i];
            int right = next_less[i] - i;
            ans -= (1LL * nums[i] * left * right);
        }
        for(int i = 0; i < n; i++){
            int left = i - prev_big[i];
            int right = next_big[i] - i;
            cout << left << " " << right << endl;
            ans += (1LL * nums[i] * left * right);
        }
        return ans;
    }
};