class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0;
        int size = cardPoints.size();
        int totalpts = 0;
        int currentpts = 0;
        int window = size - k;
        int i = 0;
        int j = 0;
        for(auto a : cardPoints){
            totalpts += a;
        }
        while(j < size){
            int n = j - i + 1;
            currentpts += cardPoints[j];
            if(n >= window){
                ans = max(ans, totalpts - currentpts);
            }
            while(n >= window){
                currentpts -= cardPoints[i];
                i++;
                n = j - i + 1;    
            }
            j++;
        }
        return ans;
    }
};