//Link: https://www.geeksforgeeks.org/problems/check-for-bst/1

bool isBST(Node* root, int l=INT_MIN, int r=INT_MAX) {
      if(!root) return 1;
      if(root->data > l && root->data < r)
          return isBST(root->left,l,root->data) && isBST(root->right,root->data,r);
      return 0;
  }
