//Link: https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

class Solution {
public:
    // Recursive function to construct a binary tree from inorder and postorder traversals
    Node* buildTree(int in[], int post[], int n) {
      
        if (n == 0) return nullptr;

        int rootIndex = 0;
        while (rootIndex < n && in[rootIndex] != post[n - 1]) rootIndex++;
        

        Node* root = new Node(post[n - 1]);

        Node* leftSubtree = buildTree(in, post, rootIndex);

        Node* rightSubtree = buildTree(in + rootIndex + 1, post + rootIndex, n - rootIndex - 1);

        root->left = leftSubtree;
        root->right = rightSubtree;

        return root;
    }
};
