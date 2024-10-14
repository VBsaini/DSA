#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        long mid;
        if(target > nums[r]) return r+1;
        while(l<=r){
            mid = (l + r)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return l;
    }


int main()
{
    vector<int> arr = {1, 2, 4, 7};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}