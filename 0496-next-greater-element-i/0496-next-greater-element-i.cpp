class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> a;
        unordered_map<int, int> M;
        for(int i = 0; i < nums2.size() ; i++){
            int b = nums2[i];
            while(!a.empty() && a.top() <= b) {
                M[a.top()] = b;   
                a.pop();
            }
            a.push(b);
        }

        for(int i = 0; i < nums1.size(); i++){
            if(M.find(nums1[i]) == M.end()){
                nums1[i] = -1;
            } else {
                nums1[i] = M[nums1[i]];
            }
        }
    return nums1;
    }
};