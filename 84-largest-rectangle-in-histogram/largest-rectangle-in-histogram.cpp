class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // stack<int> PS;
        // stack<int> NS;
        // NS.push(heights[0]);
        // int ans = heights[0];
        // for(int i = heights.size() - 1; i <= ; i--){
        //     NS.push(heights[i]);
        // }
        // for(int i = 1; i < heights.size(); i++){
        //     ans = max(ans, heights[i]);
        //     int ele = heights[i];
        //     if(ele >= NS.top()){
        //         int diff = ele - (ele - NS.top());
        //         NS.push(ele);
        //         ans = max(ans, diff*2);
        //     }
        // }
        vector<int> NS = Small(heights, 1);
        vector<int> PS = Small(heights, 0);
        for(auto a : PS){
            cout << a << "  ";
        }
        cout << endl;
        for(auto a : NS){
            cout << a << "  ";
        }
        int ans = 0;
        for(int i = 0; i < heights.size(); i++){
            int width = NS[i] - PS[i] - 1;
            int area = heights[i] * width;
            ans = max(ans, area);
        }
        return ans;
    }
    vector<int> Small(vector<int> arr, int mode){
        stack<int> s;
        stack<int> k;
        vector<int> ans(arr.size());
        if(mode == 0){
            for(int i = 0 ; i < arr.size(); i++){
                while(!s.empty() && s.top() >= arr[i] ){
                    s.pop();
                    k.pop();
                }
                if(s.empty()){
                    ans[i] = -1;
                } else {
                    ans[i] = k.top();
                }
                s.push(arr[i]);
                k.push(i);
            }



        } else {
            for(int i = arr.size() - 1 ; i >=0; i--){
                while(!s.empty() && s.top() >= arr[i]){
                    s.pop();
                    k.pop();
                }
                if(s.empty()){
                    ans[i] = arr.size();
                } else {
                    ans[i] = k.top();
                }
                s.push(arr[i]);
                k.push(i);
            }            

        }
        return ans;
    }
};