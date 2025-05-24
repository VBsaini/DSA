// Last updated: 5/24/2025, 11:54:09 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lo = 0;
        int hg = arr.size();
        int mid = (lo + hg) / 2;
        while(lo<hg){
            mid = (lo + hg) / 2;
            if(arr[mid] - mid > k) hg = mid;
            else lo = mid + 1;
        }
        return lo + k;
    }
};