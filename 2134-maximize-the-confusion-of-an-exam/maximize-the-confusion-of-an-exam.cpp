class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l = 0;
        int ans = 0;
        vector<int> arr(2, 0);
        for(int high = 0; high < answerKey.size(); high++){
            if(answerKey[high] == 'T'){
                arr[1]++;
            } else {
                arr[0]++;
            }
            int len = high - l + 1;
            int freq = find(arr);
            int diff = len - freq;
            while(diff > k){
                if(answerKey[l] == 'T'){
                    arr[1]--;
                } else {
                    arr[0]--;
                }
                l++;
                len = high - l + 1;
                freq = find(arr);
                diff = len - freq; 
            }
            ans = max(ans, high - l + 1);
        }
        return ans;
    }
    int find(vector<int> arr){
        int freq = 0;
        for(auto a : arr){
            freq = max(freq, a);
        }
        return freq;
    }
};