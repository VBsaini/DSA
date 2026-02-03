class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int peak = n - 1;
        int valley = 0;
        if(nums.size() <= 3) return false;
        for(int i = 0; i < n - 1; i++){
            if(peak == n - 1 && nums[i] >= nums[i+1]) peak = i;
            if(valley == 0 && nums[n-i-1] <= nums[n-i-2]) valley = n-i-1;
            if(peak < valley) return isDecreasing(nums, peak, valley);
        }
        
        return false;
    }
    bool isDecreasing(vector<int> &ar, int a, int b){
        if(a == 0 || b == ar.size()-1) return false;
        for(int i = a; i < b; i++){
            if(ar[i] <= ar[i+1]) return false;
        }
        return true;
    }
};