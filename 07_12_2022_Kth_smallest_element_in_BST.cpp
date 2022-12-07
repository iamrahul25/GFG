/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/




class Solution {
  public:
  
    //Approach 2: Without Using Extra Space:-------------------
  
    
    //---------------------------------------------------------
  
  
  
    //Approach 1: With using Extra Space:----------------------
    
    // void inorder(Node* root, vector<int> &v){
    //     if(root==NULL) return;
        
    //     inorder(root->left, v);
    //     v.push_back(root->data);
    //     inorder(root->right,v);
    // }

    // // Return the Kth smallest element in the given BST
    // int KthSmallestElement(Node *root, int K) {
    //     vector<int> v;
    //     inorder(root,v);
        
    //     if(K>v.size()) return -1;
    //     return v[K-1];
    // }
    
    //------------------------------------------------------------
};
