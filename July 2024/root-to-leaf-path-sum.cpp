//Link: https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1

class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
          if (root == NULL) 
          {
            return false; // An empty tree cannot have a path that sums up to target
        }
        
        // If we reach a leaf node, check if the current path sum equals the target
        if (root->left == NULL && root->right == NULL) 
        {
            return (root->data == target);
        }
        
        // Subtract the current node's value from the target
        int newTarget = target - root->data;
        
        // Recursively check the left and right subtrees
        bool leftHasPath = hasPathSum(root->left, newTarget);
        bool rightHasPath = hasPathSum(root->right, newTarget);
        
        return leftHasPath || rightHasPath;
    }
};
