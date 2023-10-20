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

    void in_Traversal(TreeNode* root, vector<int>& inorder){
        
        if(root == NULL) return;
        in_Traversal(root->left, inorder);
        inorder.push_back(root->val);
        in_Traversal(root->right, inorder);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        in_Traversal(root, inorder);
        return inorder;
        
    }
};