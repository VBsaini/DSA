// Rearrange Array Elements by Sign
// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
// You should return the array of nums such that the the array follows the given conditions:
// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

#include <iostream> 
#include <vector>
using namespace std;  
vector<int> RearrangeArrayElementsbySign(vector<int> nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int p = 1;
        int l = 0;
        for(auto a: nums){
            if(a<0){
                ans[p] = a;
                p += 2;
            } else {
                ans[l] = a;
                l += 2;
            } 
        }
    return ans;
}
int main() 
{
    vector<int> num = {3,1,-2,-5,2,-4};
    num = RearrangeArrayElementsbySign(num); 
    for(auto a: num){
        cout << a << " ";
    }
    return 0; 
} 

