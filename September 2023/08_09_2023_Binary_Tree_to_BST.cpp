class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    //Preorder Traversal
    void preorder(Node* root, vector<int> &arr){
        if(root==NULL) return;
        
        arr.push_back(root->data);
        preorder(root->left, arr);
        preorder(root->right, arr);
    }
    
    Node* makeBST(int low, int high, vector<int>&arr){
        if(low>high){
            return NULL;
        }
        
        
        int mid = (low+high)/2;
        Node* root = new Node(arr[mid]);
        root->left = makeBST(low, mid-1,arr);
        root->right = makeBST(mid+1, high, arr);
        
        return root;
    }
    
    
    Node *binaryTreeToBST (Node *root){
        vector<int> arr;
        preorder(root, arr);
        sort(arr.begin(),arr.end());
        
        return makeBST(0,arr.size()-1,arr);
    }
};

//Link: https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1
