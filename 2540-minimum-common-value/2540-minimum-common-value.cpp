class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        if(nums1[0] > nums2[nums2.size() - 1] || nums2[0] > nums1[nums1.size() - 1]) return -1;
        while(i < nums1.size() && j < nums2.size() && nums1[i] != nums2[j]){
            if(nums1[i] > nums2[j]){
                j++;
            } else {
                i++;
            }
        }
        if(i < nums1.size() && j < nums2.size()){
            return nums1[i] == nums2[j] ? nums1[i] : -1;
        }
        return -1;
    }
};