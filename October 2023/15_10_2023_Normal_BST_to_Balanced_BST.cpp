class Solution{
    
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    
    //Time: O(N) Space: O(N)
    void inorder(Node* root, vector<int> &arr){
        if(root==NULL) return;
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    
    Node* makeTree(int lo, int hi, vector<int> &arr){
        if(lo>hi) return NULL;
        
        int mid = (lo + hi)/2;
        
        Node* root = new Node(arr[mid]);
        
        root->left = makeTree(lo,mid-1,arr);
        root->right = makeTree(mid+1,hi,arr);
        
        return root;
    }
    
    
    Node* buildBalancedTree(Node* root){
    	vector<int> arr;
    	inorder(root, arr);
    	return makeTree(0,arr.size()-1,arr);
    }
};
