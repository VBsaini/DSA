class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int N1 = nums1.size() - 1;
        int N2 = nums2.size() - 1;
        int ans = 0;
        while(N2 >= 0){
            while(N1 > 0 && nums1[N1 - 1] <= nums2[N2]){
                N1--;
            }
            if(N1 <= N2 && nums1[N1] <= nums2[N2]){
                ans = max(ans, N2 - N1);
            }
            N2--;
        }

        return ans;
    }
};