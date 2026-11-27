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
    void preorder(TreeNode* curr, vector<int>* items) {
        if (!curr) return;

        items->push_back(curr->val);
        preorder(curr->left, items);
        preorder(curr->right, items);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;

        preorder(root, &res);
        return res;
    }
};