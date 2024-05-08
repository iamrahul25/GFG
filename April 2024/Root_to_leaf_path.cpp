//Link: https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1

class Solution {
  public:
    vector<vector<int>> ans;
    
    void solve(Node* root, vector<int> temp) {
        if(root == NULL) {
            return;
        }
        if(root -> left == NULL && root -> right == nullptr) {
            temp.push_back(root -> data);
            ans.push_back(temp);
            return;
        } 
        temp.push_back(root -> data);
        solve(root -> left, temp);
        solve(root -> right, temp);
    }
    
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<int> temp;
        solve(root, temp);
        return ans;
    }
};
