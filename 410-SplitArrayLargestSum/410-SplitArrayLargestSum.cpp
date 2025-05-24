// Last updated: 5/24/2025, 11:54:32 PM
class Solution {
public:
    int possible(vector<int>& nums, long long mid){
        long long count = 0;
        int check = 1;
        for(auto s : nums){
            count += s;
            if(count > mid) {
                check += 1;
                // cout << check << "  - "  << mid << "||";
                count = s;
            }
        }
        return check;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);
        long long mid = (r + l)/2;
        long long ans;
        while(l <= r){
            mid = (l + r)/2;
            if(possible(nums, mid) > k){
                l = mid + 1;
            } else {
                ans = mid;
                r = mid - 1;
            }
        }
        return l;
    }   
};