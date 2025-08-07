class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        stack<int> st;
        stack<int> st2;
        int j = nums.size() - 1;
        int left = nums.size();
        int right = 0;
        
        for(int i = 0; i < nums.size(); i++){
            while(!st2.empty() && nums[i] < nums[st2.top()]){
                left = min(st2.top(), left);
                right = max(i, right);
                st2.pop();
            }
            st2.push(i);
        }
        while(j >= 0){
            while(!st.empty() && nums[st.top()] < nums[j]){
                right = max(st.top(), right);
                left = min(j, left);
                st.pop();
            }
            st.push(j);
            j--;
        }
        cout << right << " " << left;
        return (right > left) ? right - left + 1 : 0 ;

    }
};