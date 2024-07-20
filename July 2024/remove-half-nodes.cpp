//Link: https://www.geeksforgeeks.org/problems/remove-half-nodes/1

class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        if(root==NULL){
            return root;
        }
        root->left=RemoveHalfNodes(root->left);
        root->right=RemoveHalfNodes(root->right);
        if(root->left!=NULL && root->right==NULL){
            return root->left;
        }
        else if(root->left==NULL && root->right!=NULL){
            return root->right;
        }
        
        return root;
    }
};
