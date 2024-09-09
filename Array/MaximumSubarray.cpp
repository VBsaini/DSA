#include <iostream> 
#include <vector>
using namespace std; 
int maxSubArray(vector<int>& nums) {
            int maxi = nums[0];
            int sum = 0;
            for(int a = 0; a<nums.size();a++){
                sum += nums[a];
                maxi = max(maxi, sum);
                if(sum < 0){
                    sum = 0;
                }
            }
            return maxi;
}
int main() 
{
    vector<int> num = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(num); 
    return 0; 
} 

