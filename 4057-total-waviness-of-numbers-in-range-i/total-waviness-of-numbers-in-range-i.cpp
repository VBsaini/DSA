class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1; i <= num2; i++){
            vector<int> num;
            int temp = i;
            while(temp != 0){
                int rem = temp%10;
                num.push_back(rem);
                temp = temp / 10;
            }
            reverse(num.begin(), num.end());
            for(int j = 1; j < num.size()-1; j++){
                if(num[j] > num[j-1] && num[j] > num[j+1]) ans++;
                if(num[j] < num[j-1] && num[j] < num[j+1]) ans++;
            }
            cout << endl;
        }
        return ans;
    }
};