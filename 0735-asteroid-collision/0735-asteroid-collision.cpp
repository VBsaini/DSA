class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for(int i = 0; i < asteroids.size(); i++){
            int curr = asteroids[i];
            int prev = st.empty() ? 0 : st.top();
            if(prev > 0 && curr < 0){
                bool alive = true;
                while(!st.empty() && alive && st.top() > 0 && curr < 0){
                    if(st.top() > abs(curr)){
                        alive = false;
                        break;
                    } else if (st.top() < abs(curr)) {
                        st.pop();
                    } else {
                        alive = false;
                        st.pop();
                    }
                }
                if(alive){
                    st.push(curr);
                }    
            } else {
                st.push(curr);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            cout << st.top() << endl;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};