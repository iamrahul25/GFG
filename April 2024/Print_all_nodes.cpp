//Link: https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

int dfs(Node* root, vector<int>& res) {
    if(!root) return 0;
    int left=dfs(root->left,res);
    int right=dfs(root->right,res);
    if(!left && right) res.push_back(right);
    if(!right && left) res.push_back(left);
    return root->data;
}

vector<int> noSibling(Node* node)
{
    // code here
    vector<int> res;
    dfs(node,res);
    if(res.size()==0) res.push_back(-1);
    sort(res.begin(),res.end());
    return res;
}
