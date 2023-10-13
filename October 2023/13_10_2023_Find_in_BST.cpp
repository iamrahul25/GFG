class Solution{

public:
    
    //Time: O(N) Space: O(1)
    void preorder(Node* root, int x, int &ans){
        if(root==NULL) return;
        
        if(root->data<=x) ans = max(ans, root->data);
        preorder(root->left, x, ans);
        preorder(root->right, x, ans);
    }

    int floor(Node* root, int x) {
        int ans = INT_MIN;
        preorder(root, x, ans);
        if(ans==INT_MIN) return -1;
        return ans;
    }
};
