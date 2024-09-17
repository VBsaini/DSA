// Longest Consecutive Sequence
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

#include <algorithm>
#include <iostream> 
#include <vector>
#include <unordered_set>
using namespace std;  
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> st;
       int n = nums.size();
       if(n == 0){
        return 0;
       }
       int longest = 1;
       for(int a = 0; a<n; a++){
        st.insert(nums[a]);
       }
       for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }
       }
       return longest;
    }
int main() 
{   int n;
    vector<int> num = {100,4,200,1,3,2};
    n = longestConsecutive(num); 
    cout << n;
    return 0; 
} 
