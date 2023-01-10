class Solution {
  public:
  
    int sumNode(Node* root){
        if(root==NULL) return 0;
        return root->data + sumNode(root->left) + sumNode(root->right);
    }
    
    
    void toSumTree(Node *node){
        if(node==NULL){
            return;
        }
        
        node->data = sumNode(node->left) + sumNode(node->right);
        toSumTree(node->left);
        toSumTree(node->right);
    }
};
