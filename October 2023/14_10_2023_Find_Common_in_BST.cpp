//Link: https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1

class Solution{
    public:
    //Function to find the nodes that are common in both BST. 

    //Time: O(N+M) Space: O(N)
    void inorder(Node* root, unordered_set<int> &st){
        if(root==NULL) return;
        
        inorder(root->left, st);
        st.insert(root->data);
        inorder(root->right, st);
    }
    
    void inorder2(Node* root, unordered_set<int> &st, vector<int> &arr){
        if(root==NULL) return;
        
        inorder2(root->left, st, arr);
        if(st.find(root->data)!=st.end()) arr.push_back(root->data);
        inorder2(root->right, st, arr);
    }
    
    
    vector <int> findCommon(Node *root1, Node *root2){
        unordered_set<int> st;
        inorder(root1, st);
        
        vector<int> arr;
        inorder2(root2, st, arr);
        
        return arr;
    }
};
