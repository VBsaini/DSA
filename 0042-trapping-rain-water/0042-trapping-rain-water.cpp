class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = 0;
        int n = height.size();
        int ans = 0;
        stack<int> st;
       for(int right = 0; right < n; right++){
        while(!st.empty() && height[st.top()] < height[right]){
            int mid = st.top();
            st.pop();
            if(st.empty()) break;
            int left = st.top();
            int minHeight = min(height[right], height[left]) - height[mid];
            int width = right - left - 1;
            ans += width * minHeight;
        }
        st.push(right);
       }
        return ans;
    }
};