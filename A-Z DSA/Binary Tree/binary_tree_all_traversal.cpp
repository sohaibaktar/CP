/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inTraversal(TreeNode* root, vector<int>& v){
        if(root == NULL) return;
        
        inTraversal(root->left,v);
        v.push_back(root->data);
        inTraversal(root->right,v);
    }
void preTraversal(TreeNode* root, vector<int>& v){
        if(root == NULL) return;
        v.push_back(root->data);
        preTraversal(root->left,v);
        preTraversal(root->right,v);
    }
void postTraversal(TreeNode* root, vector<int>& v){
        if(root == NULL) return;
        
        postTraversal(root->left,v);
        postTraversal(root->right,v);
        v.push_back(root->data);
    }

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.

        vector<int> in_v;
        inTraversal(root,in_v);

        vector<int> pre_v;
        preTraversal(root,pre_v);

        vector<int> post_v;
        postTraversal(root,post_v);
        
        vector<vector<int>> ans;

        ans.push_back(in_v);
        ans.push_back(pre_v);
        ans.push_back(post_v);
        return ans;
}