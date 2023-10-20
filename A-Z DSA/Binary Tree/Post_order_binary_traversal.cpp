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
    void post_Traversal(TreeNode* root, vector<int>& postorder){
        
        if(root == NULL) return;
        post_Traversal(root->left, postorder);
        post_Traversal(root->right, postorder);
        postorder.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> postorder;
        post_Traversal(root, postorder);
        return postorder;
    }
};