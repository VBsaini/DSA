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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int maxDepth = maxD(root);
        TreeNode* ans =  DeepLeaves(root, maxDepth, 1);
        return ans;
    }
    TreeNode* DeepLeaves(TreeNode* root, int maxi, int currLen){
        if(!root) return nullptr;
        if(maxi == currLen){
            return root;
        }
        TreeNode* left = DeepLeaves(root->left, maxi, currLen+1);
        TreeNode* right = DeepLeaves(root->right, maxi, currLen+1);
        if(left && right) return root;
        return left ? left : right;

    }
    int maxD(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        return max(maxD(root->left), maxD(root->right)) + 1;
    }
};