class Solution{
  public:
    int maxDepth(Node *root) {
        if(root == NULL) return 0;
        return max( maxDepth(root->left), maxDepth(root->right) ) +1;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/maximum-depth-of-binary-tree/1
