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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //this will be a answer;
        vector<vector<int>> ans;
       
        //this is a queue to store for sometime.
        queue<TreeNode*> q;

        //checking root is null.
        if(root == NULL) 
            return ans;
        //store root in queue.
        q.push(root);

        while(!q.empty()){
            //for store levelwise ans;
            vector<int> level;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};