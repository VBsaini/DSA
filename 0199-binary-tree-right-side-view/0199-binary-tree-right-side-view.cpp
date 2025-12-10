/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode* > q;
        vector<int> ans;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            TreeNode* NR = q.back();
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node != nullptr && node->left != NULL) q.push(node->left);
                if(node != nullptr && node->right != NULL) q.push(node->right);
            }
            if(NR != nullptr) ans.push_back(NR->val);
        }
        return ans;
    }
};