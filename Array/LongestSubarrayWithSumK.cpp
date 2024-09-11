// Problem statement
// You are given an array 'a' of size 'n' and an integer 'k'.
// Find the length of the longest subarray of 'a' whose sum is equal to 'k'.
// Example :
// Input: ‘n’ = 7 ‘k’ = 3
// ‘a’ = [1, 2, 3, 1, 1, 1, 1]
// Output: 3
// Explanation: Subarrays whose sum = ‘3’ are:
// [1, 2], [3], [1, 1, 1] and [1, 1, 1]
// Here, the length of the longest subarray is 3, which is our final answer.


#include <iostream> 
#include <vector>
using namespace std; 
int longestSubarrayWithSumK(vector<int> A, long long K) {
        int L = 0;
        int R = 0;
        long long sum = A[0];
        int len = 0;
        int N = A.size();
        while(R < N){
            while(L <= R && sum > K){
                sum -= A[L];
               L++; 
            }
            if(sum == K){
                len=max(len, R-L+1);
            }
            R++;
            if(R < N) sum += A[R];
        }
        return len;
}
int main() 
{
    vector<int> num = {1, 2, 3, 1, 1, 1, 1};
    cout<<longestSubarrayWithSumK(num, 3); 
    return 0; 
} 

