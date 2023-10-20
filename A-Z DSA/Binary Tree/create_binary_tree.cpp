/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/
Node* solvep(vector<int> &arr, int index){
    if(index>=arr.size() || arr[index] ==-1){
        return nullptr;
    }
    Node* newnode = new Node(arr[index]);
    newnode->left = solvep(arr,2*index+1);
    newnode->right = solvep(arr,2*index+2);
    return newnode;
}
Node* createTree(vector<int>&arr){
    // Write your code here.
    return solvep(arr,0);
   
}