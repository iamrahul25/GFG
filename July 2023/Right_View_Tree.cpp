class Solution{
    
    public:
    
    void preorder(Node* root, vector<int> &arr, int h){
        if(root==NULL) return;
        
        if(arr.size()<=h) arr.push_back(root->data);
        else arr[h] = root->data;
        
        preorder(root->left, arr, h+1);
        preorder(root->right, arr, h+1);
    }
    
    
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root){
       vector<int> arr;
       int h = 0;
       preorder(root, arr, h);
       return arr;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
