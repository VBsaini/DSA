
#include <iostream> 
#include <vector>
#include <unordered_map>
using namespace std; 
// Given an array arr containing n integers and an integer k. Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.
// Input : n = 6, arr[] = {10, 5, 2, 7, 1, 9}, k = 15
// Output : 4
// Explanation: The sub-array is {5, 2, 7, 1}.
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int, int> map;
        int len = 0;
        int sum = 0;
        for(int a = 0; a < N; a++){
            sum += A[a];
            if(sum == K){
                len = max(len, a+1);
            }
            int rem = sum - K;
            if(map.find(rem) != map.end()){
                int L = a - map[rem];
                len = max(len, L);
            }
            if(map.find(sum) == map.end()){
                map[sum] = a;
            }
        }
        return len;
    } 
int main() 
{
    int num[] = {10, 5, 2, 7, 1, 9};
    cout<<lenOfLongSubarr(num, 6, 15); 
    return 0; 
} 
