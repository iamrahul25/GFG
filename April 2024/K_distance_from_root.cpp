//Link: https://www.geeksforgeeks.org/problems/k-distance-from-root/1

class Solution{
    public:
    
    //Approach 1: Time: O(N) Space: O(N)
    //Function for Inorder Traversal of Tree
    void inorder(struct Node *root,int h, int k, vector<int> &ans){
        if(root==NULL) return;
        
        inorder(root->left, h+1, k, ans);
        
        if(h==k){
            ans.push_back(root->data);
        }
        
        inorder(root->right, h+1, k, ans);
    }

    //Function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      vector<int> ans;
      inorder(root,0,k,ans);
      return ans;
    }
};
