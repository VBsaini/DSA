class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int count = 0;
        int minN = INT_MAX;
        long long sum = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0 ; j < matrix[0].size(); j++){
                int num = matrix[i][j];
                sum += abs(num); 
                minN = min(minN, abs(num));
                if(num < 0){
                    count++;
                }
            }
        }
        if(count % 2 == 0) return sum;
        cout << minN;
        return sum - (2 * minN);
    }
};