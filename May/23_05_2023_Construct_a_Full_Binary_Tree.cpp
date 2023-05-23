class Solution{
  public:
    
    //Recursive Problem: Time: O(N) Space: O(1)
    Node* makeTree(int i, int arr[], int n, int h){
        if(h<0) return NULL;
        
        Node* root = new Node(arr[i]);
        root->left = makeTree(i+1, arr, n, h-1);
        root->right = makeTree(i+pow(2,h), arr, n, h-1);
        
        return root;
    }
  
  
    Node* constructBinaryTree(int pre[], int preMirror[], int n){
        int h = log2(n+1)-1; //Height of Tree - 1
        int i = 0;
        Node* root = makeTree(i, pre, n, h);
    }
};


//Link: https://practice.geeksforgeeks.org/problems/93c977e771fc0d82e87ba570702732edb2226ad7/1
