//Link: https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

class Solution{
    public:
    
    //Approach 1! => Time: O(N) Space: O(N)
    void inorder(Node* root, vector<int>&arr){
        if(root==NULL) return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    
    int kthLargest(Node *root, int k){
        vector<int> arr;
        inorder(root, arr);
        
        k = arr.size() - k;
        return arr[k];
    }
};
