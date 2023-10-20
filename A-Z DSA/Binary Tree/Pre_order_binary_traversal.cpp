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
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int> v;
        // preTraversal(root,v);
        // return v;
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            if(root->right != NULL)
                st.push(root->right);
            if(root->left != NULL)
                st.push(root->left);
        }
        return ans;
        
    }

    // void preTraversal(TreeNode* root, vector<int>& v){
    //     if(root == NULL) return;
    //     v.push_back(root->val);
    //     preTraversal(root->left,v);
    //     preTraversal(root->right,v);
    // }
};