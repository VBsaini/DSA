// Last updated: 5/24/2025, 11:55:04 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, k = m;
        while(i<n){
            nums1[k++] = nums2[i++];
        }
        sort(nums1.begin(), nums1.end());
    }
};