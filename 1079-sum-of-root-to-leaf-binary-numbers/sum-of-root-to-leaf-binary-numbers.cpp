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
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        int num = 0;
        return inOrder(root, num);
    }
    int inOrder(TreeNode* node, int d){ 
        if(node->left == nullptr && node->right == nullptr){
            d = d * 2 + node->val;
            return d;
        }
        d = d * 2 + node->val;
        int L = 0;
        int R = 0;
        if(node->left != nullptr) L = inOrder(node->left, d);
        if(node->right != nullptr) R = inOrder(node->right, d);
        return L + R;
    }
};