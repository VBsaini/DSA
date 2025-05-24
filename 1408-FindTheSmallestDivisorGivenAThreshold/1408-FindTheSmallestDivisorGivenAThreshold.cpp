// Last updated: 5/24/2025, 11:54:11 PM
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = 0;
        int l = 1;
        int r = *max_element(nums.begin(), nums.end());
        while(l<=r){
            int mid = (l+r)/2;
            int t = getT(nums, mid);
            if(t <= threshold){
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
    int getT(vector<int>& nums, int mid){
        int t = 0;
        for(int i = 0; i < nums.size(); i++){
            t += (int)(ceil(double(nums[i])/double(mid)));
        }
        return t;
    }
};