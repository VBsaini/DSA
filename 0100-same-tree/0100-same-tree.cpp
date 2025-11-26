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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans = check(p, q);
        return ans;
    }
    bool check(TreeNode* node, TreeNode* node2){
        if(node == nullptr || node2 == nullptr){
            return (node==node2);
        }
        if(node->val != node2->val){
            return false;
        }
        bool lc = check(node->left, node2->left);
        bool rc = check(node->right, node2->right);

        if(lc == false || rc == false) return false;
        return true;
    }
};