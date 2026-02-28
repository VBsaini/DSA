class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> arr(256, 0);
        int l = 0;
        int ans = 0;
        for(int h = 0; h < s.size(); h++){
            arr[s[h]]++;
            int len = h - l + 1;
            int freq = find(arr);
            int diff = len - freq;
            cout << diff << " " << h << endl;
            while(diff > k){
                arr[s[l]]--;
                l++;
                len = h - l + 1;
                freq = find(arr);
                diff = len - freq;
            }
            ans = max(ans, h-l+1); 
        }
        return ans;
    }
    int find(vector<int> arr){
        int sum = 0;
        for(auto a : arr){
            if(a > 0) sum = max(sum, a);
        }
        return sum;
    }
};