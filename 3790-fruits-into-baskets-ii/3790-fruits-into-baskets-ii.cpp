class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
     int ans = 0;
     for(int f = 0; f < fruits.size(); f++){
        int b = 0;
        if(fruits[f] <= baskets[b]){
            baskets[b] = -1;
            b++;
        } else {
            while(b < baskets.size() && fruits[f] > baskets[b]){
                b++;
            }
            if(b == baskets.size()){
                ans++; 
            } else {
            baskets[b] = -1;
            b++;
            }
        }
     }
     return ans;   
    }
};