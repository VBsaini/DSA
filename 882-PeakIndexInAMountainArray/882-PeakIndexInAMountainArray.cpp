// Last updated: 5/24/2025, 11:54:22 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int e = arr.size() - 1;
        int s = 0;
        int mid = s + (e-s)/2;
        while(s<e){
            if(arr[mid] < arr[mid+1]){
                s = mid + 1;
            } else {
                e = mid;
            }
        mid = s + (e-s)/2;
        }
        return s;
    }
};