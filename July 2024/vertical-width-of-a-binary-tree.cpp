//Link: https://www.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1

class Solution {
  public:
    unordered_set<int>st;
    
    void inorder(Node* root,int hd){
        if(root!=NULL)
        {
            inorder(root->left,hd-1);
            st.insert(hd);
            inorder(root->right,hd+1);
        }
    }

    int verticalWidth(Node* root) {
        // code here
        st.clear();
        inorder(root,0);
        return st.size();
    }
};
