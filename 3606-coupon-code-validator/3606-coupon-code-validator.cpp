class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n = code.size();
        unordered_map<string, vector<string>> M;
        M["electronics"] = {};
        M["grocery"] = {};
        M["pharmacy"] = {};
        M["restaurant"] = {};
        vector<string> ans;
        for(int i = 0; i < n; i++){
            bool alphaNum = (code[i].size() != 0);
            for(auto a : code[i]){
                if(!(isalnum(a) || a == '_')){
                    alphaNum = false;
                    break;
                }
            }
            if(!alphaNum || !isActive[i]){
                continue;
            }
            if(M.find(businessLine[i]) != M.end()){
                M[businessLine[i]].push_back(code[i]);
            }
        }
        sort(M["electronics"].begin(), M["electronics"].end());
        sort(M["grocery"].begin(), M["grocery"].end());
        sort(M["pharmacy"].begin(), M["pharmacy"].end());
        sort(M["restaurant"].begin(), M["restaurant"].end());
        for(auto a : M["electronics"]){
            ans.push_back(a);
        }
        for(auto a : M["grocery"]){
            ans.push_back(a);
        }
        for(auto a : M["pharmacy"]){
            ans.push_back(a);
        }
        for(auto a : M["restaurant"]){
            ans.push_back(a);
        }
        return ans;
    }
};