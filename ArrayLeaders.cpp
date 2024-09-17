// Array Leaders
// Given an array arr of n positive integers, your task is to find all the leaders in the array. 
// An element of the array is considered a leader if it is greater than all the elements on its right 
// side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.

// Input: n = 6, arr[] = {16,17,4,3,5,2}
// Output: 17 5 2
// Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.

// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).
// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.
// The replacement must be in place and use only constant extra memory.
#include <algorithm>
#include <iostream> 
#include <vector>
using namespace std;  
vector<int> leaders(int n, int arr[]) {
        // Code here
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(max);
    for(int b = n-2; b>=0; b--){
        if(max<=arr[b]){
            ans.push_back(arr[b]);
            max = arr[b];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
int main() 
{   
    int nums[] = {16,17,4,3,5,2};
    vector<int> num;
    num = leaders(6, nums); 
    for(auto a: num){
        cout << a << " ";
    }
    return 0; 
} 

