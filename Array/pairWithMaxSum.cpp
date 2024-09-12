
#include <iostream> 
#include <vector>
#include <unordered_map> 
using namespace std; 
// Given an array arr[], with 0-based indexing, select any two indexes, i and j 
// such that i < j. From the subarray arr[i...j], select the smallest and second smallest numbers 
// and add them, you will get the score for that subarray. Return the maximum possible score across all the 
// subarrays of array arr[].
// Input : arr[] = [4, 3, 1, 5, 6]
// Output : 11
// Explanation : Subarrays with smallest and second smallest are:- [4, 3] smallest = 3,second smallest = 4
// [4, 3, 1] smallest = 1, second smallest = 3
// [4, 3, 1, 5] smallest = 1, second smallest = 3
// [4, 3, 1, 5, 6] smallest = 1, second smallest = 3
// [3, 1] smallest = 1, second smallest = 3
// [3, 1, 5] smallest = 1, second smallest = 3
// [3, 1, 5, 6] smallest = 1, second smallest = 3
// [1, 5] smallest = 1, second smallest = 5
// [1, 5, 6] smallest = 1, second smallest = 5
// [5, 6] smallest = 5, second smallest = 6
// Maximum sum among all above choices is, 5 + 6 = 11.
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int maxi = 0;
        for(int a = 0; a<arr.size()-1; a++){
            maxi = max(maxi, (arr[a]+arr[a+1]));
        }
        return maxi;    } 
int main() 
{
    vector<int> num = {4, 3, 1, 5, 6};
    cout<<pairWithMaxSum(num); 
    return 0; 
} 
