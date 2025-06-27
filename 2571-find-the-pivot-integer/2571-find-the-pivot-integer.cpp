class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n * (n  + 1))/2;
        int pivot = sqrt(sum);
        if(pivot * pivot == sum){
            return pivot;
        } else {
            return -1;
        }
    }
};