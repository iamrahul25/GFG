class Solution{
    
    public:
    
    int count = 0;

    bool checkSame(Node*root, int num){
        
        if(root==NULL) return true;
        
        return (root->data==num) && (checkSame(root->left, num)) && (checkSame(root->right, num));
    }
    
    void preorder(Node *root){
        
        if(root==NULL) return;
        
        if(checkSame(root, root->data)) count++;
        
        preorder(root->left);
        preorder(root->right);
        
    }
    
    
    int singlevalued(Node *root){
        
        preorder(root);
        
        return count;
    }
    
};
