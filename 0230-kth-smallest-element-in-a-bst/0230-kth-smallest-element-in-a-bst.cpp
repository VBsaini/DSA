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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> A;
        Fio(root, A);
        return A[k-1];
    }
    void Fio(TreeNode* node, vector<int> &A){
        if(node->left != nullptr){
            Fio(node->left, A);
        }
        A.push_back(node->val);
        if(node->right != nullptr){
            Fio(node->right, A);
        }
    }
};