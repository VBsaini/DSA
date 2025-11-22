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
    int maxPathSum(TreeNode* root) {
        int maxI = INT_MIN;
        maxpath(root, maxI);
        return maxI;
    }

    int maxpath(TreeNode* node, int &maxI){
        if(node == nullptr){
            return 0;
        }
        int lh = max(0, maxpath(node->left, maxI));
        int rh = max(0, maxpath(node->right, maxI));
        maxI = max(maxI, lh+rh+node->val);
        return (node->val) + max(lh, rh);
    }
};