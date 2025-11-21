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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxI = 0;
        int x = MaxH(root, maxI);
        return maxI;
    }

    int MaxH(TreeNode* node, int& maxI){
        if(node == nullptr){
            return 0;
        }
        int lh = MaxH(node->left, maxI); 
        int rh = MaxH(node->right, maxI);
        maxI = max(maxI, lh+rh);
        return 1 + max(lh, rh);
    }
};