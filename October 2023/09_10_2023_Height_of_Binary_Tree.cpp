//Link: https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1 

class Solution{
    public:
    //Function to find the height of a binary tree.
    
    //Time: O(N) Space: O(1)
    int height(struct Node* node){
        if(node==NULL) return 0;
        
        return 1 + max(height(node->left), height(node->right));
    }
};
