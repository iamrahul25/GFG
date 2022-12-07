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
    
    void inorder(Node* root, int k, int &c, int &ans){
        
        if(root==NULL) return;
        
        inorder(root->left, k, c, ans);
        c++;
        if(c==k){
            ans = root->data;
        }
        inorder(root->right, k, c, ans);
    } 
    
    int KthSmallestElement(Node *root, int K){
        int ans = -1;
        int c = 0;
        inorder(root,K,c,ans);
        return ans;
    }
    
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
