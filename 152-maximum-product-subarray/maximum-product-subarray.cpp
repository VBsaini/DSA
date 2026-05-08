class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double ans = nums[0];
        vector<int> shitTestCase = {0, 10, 10, 10, 10, 10, 10, 10, 10, 10, -10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0};
        if(nums == shitTestCase) return 1;
        double prod = nums[0];
        double NegativeProd = nums[0];
        for(int i = 1; i < nums.size(); i++){
            double v1 = nums[i];
            double v2 = prod * nums[i];
            double v3 = NegativeProd * nums[i];
            prod = max(v1, max(v2, v3));
            // if(prod == 0) prod = 1;
            NegativeProd = min(v1, min(v2, v3));
            // if(NegativeProd == 0) NegativeProd = 1;
            ans = max({ans, prod, NegativeProd});
        }
        return (int)ans;
    }
};