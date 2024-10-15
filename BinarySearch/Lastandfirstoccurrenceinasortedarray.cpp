// Example 1:
// Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
// Output: 2, 4
// Explanation: As the target value is 13 , it appears for the first time at index number 2.

// Example 2:
// Input: N = 7, target=60, array[] = {3,4,13,13,13,20,40}
// Output: -1, -1
// Explanation: Target value 60 is not present in the array 

#include <bits/stdc++.h>
using namespace std;

    int lower_bound(vector<int>& nums, int low, int high, int target){
    while(low <= high){
        int mid = (low + high) >> 1;
        if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int startingPosition = lower_bound(nums, low, high, target);
        int endingPosition = lower_bound(nums, low, high, target + 1) - 1;
        if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endingPosition};
        }
        return {-1, -1};
    }
int main(){
    int l;
    vector<int> numss = {3,4,13,13,13,20,40};
    vector<int> ans = searchRange(numss, 60);
        for(auto a: ans){
        cout << a << " ";
    }
}