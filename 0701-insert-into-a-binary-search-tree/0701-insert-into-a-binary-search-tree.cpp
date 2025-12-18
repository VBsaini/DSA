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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ans = new TreeNode(val);
        if(!root){
            return ans;
        }
        TreeNode* temp = root;
        while(temp != nullptr){
            if(temp->val > val){
                if(temp->left == nullptr){
                    temp->left = ans;
                    return root;
                }
                temp = temp->left;
            } else if (temp->val < val){
                if(temp->right == nullptr){
                    temp->right = ans;
                    return root;
                }
                temp = temp->right;
            }
        }
        return ans;
    }
};