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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathsum(root, targetSum, 0);
    }
    bool pathsum(TreeNode* node, int target, int sum){
        if(!node) return false;
        sum += node->val;
        if(sum == target && node->left == nullptr && node->right == nullptr){
            return true;
        }
        bool left = pathsum(node->left, target, sum); 
        bool right = pathsum(node->right, target, sum);
        if(left == true){
            return left;
        } else {
            return right;
        }
    }
};