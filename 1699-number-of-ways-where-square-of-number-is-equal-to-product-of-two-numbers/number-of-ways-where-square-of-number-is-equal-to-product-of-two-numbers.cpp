class Solution {
public:
    
    long long countPairs(vector<int>& nums, long long target) {
        int l = 0;
        int r = nums.size() - 1;
        long long cnt = 0;

        while (l < r) {
            long long prod = 1LL * nums[l] * nums[r];

            if (prod < target) {
                l++;
            }
            else if (prod > target) {
                r--;
            }
            else {
                // nums[l] == nums[r]
                if (nums[l] == nums[r]) {
                    long long n = r - l + 1;
                    cnt += n * (n - 1) / 2;
                    break;
                }

                long long leftCount = 1;
                long long rightCount = 1;

                while (l + 1 < r && nums[l] == nums[l + 1]) {
                    leftCount++;
                    l++;
                }

                while (r - 1 > l && nums[r] == nums[r - 1]) {
                    rightCount++;
                    r--;
                }

                cnt += leftCount * rightCount;

                l++;
                r--;
            }
        }

        return cnt;
    }

    int numTriplets(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        long long ans = 0;

        for (long long a : nums1) {
            ans += countPairs(nums2, a * a);
        }

        for (long long a : nums2) {
            ans += countPairs(nums1, a * a);
        }

        return (int)ans;
    }
};