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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode* > q;
        q.push(root);
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        int zig = 1;
        while(!q.empty()) {
            int size = q.size();
            vector<int> lvl;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                    if(node->right != nullptr) q.push(node->right);
                    if(node->left != nullptr) q.push(node->left);
                lvl.push_back(node->val);
            }
            if(zig == 1) {
                reverse(lvl.begin(), lvl.end());
            }
            cout << zig << " ";
            zig = zig == 0 ? 1 : 0;
            ans.push_back(lvl);
        }
        return ans;
    }
};