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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int maxD = MaxDepth(root);
        return DFS(root, maxD, 1);

    }
    TreeNode* DFS(TreeNode* root, int maxi, int CurrLen) {
        if(!root) return nullptr;
        if(maxi == CurrLen){
            return root;
        } 
        TreeNode* left = DFS(root->left, maxi, CurrLen+1);
        TreeNode* right = DFS(root->right, maxi, CurrLen+1);
        if(left&&right) return root;
        return left ? left : right;
    }
    int MaxDepth(TreeNode* root){
        if(!root) return 0;
        int maxDL = MaxDepth(root->left);
        int maxDR = MaxDepth(root->right);
        return max(maxDL, maxDR) + 1;
    }
};