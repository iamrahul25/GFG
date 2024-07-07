//Link: https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1

class Solution {
  public:
    // Function should return all the ancestor of the target node
    
    bool flag = false;
    void solve(struct Node* root, int target, vector<int> &v) {
        if (root == NULL || flag) {
            return;
        }
        if (root -> data == target) {
            flag = true;
            return;
        }
        v.push_back(root -> data);
        
        solve(root -> left, target, v);
        
        solve(root -> right, target, v);
        
        if (!flag)
            v.pop_back();
    }
    
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        
        if (root -> data == target)
            return {};
        
        vector<int> v;
        solve(root, target, v);
        
        reverse(v.begin(), v.end());     
        return v;
    }
};
