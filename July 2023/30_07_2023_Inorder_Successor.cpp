class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node* ans = NULL;
    
    void inorder(Node* root, Node* x){
        if(root==NULL) return;
        
        inorder(root->left, x);
        if(ans==NULL && root->data > x->data){
            ans = root;
        }
        inorder(root->right, x);
    }
    
    Node * inOrderSuccessor(Node *root, Node *x){
        inorder(root, x);
        return ans;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1
