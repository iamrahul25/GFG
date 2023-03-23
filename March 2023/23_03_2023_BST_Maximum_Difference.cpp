//Link: https://practice.geeksforgeeks.org/problems/e841e10213ddf839d51c2909f1808632a19ae0bf/1

class Solution{
public:
    
    int sumtop = 0;
    
    void preorder(Node* root, int sum,int target, Node* &tar){
        if(root==NULL) return;
        
        if(root->data==target){
            tar = root;
            sumtop = sum;
            return;
        }
        
        preorder(root->left, sum+root->data, target, tar);
        preorder(root->right, sum+root->data, target, tar);

    }
    
    int minpathsum(Node* root){
        if(root==NULL) return 0;
        
        if(root->left==NULL and root->right==NULL) return root->data;
        
        else if(root->left==NULL) return root->data + minpathsum(root->right);
        
        else if(root->right==NULL) return root->data + minpathsum(root->left);
        
        else return root->data + min(minpathsum(root->left), minpathsum(root->right));
        
    }
    
    
    int maxDifferenceBST(Node *root,int target){
        Node* tar = NULL;
        
        preorder(root, 0, target, tar);
        
        //If target Not Fount
        if(tar==NULL) return -1;

        if(tar->left==NULL and tar->right==NULL) return sumtop;
        else if(tar->left==NULL and tar->right!=NULL) return sumtop - minpathsum(tar->right);
        else if(tar->left!=NULL and tar->right==NULL) return sumtop - minpathsum(tar->left);
        else return max(sumtop - minpathsum(tar->left), sumtop - minpathsum(tar->right));
    }
};
