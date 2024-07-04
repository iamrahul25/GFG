//Link: https://www.geeksforgeeks.org/problems/duplicate-subtrees/1

class Solution {
  public:
    unordered_map<string,int> m;
    vector<Node*> ans;
    
    string solve(Node* root){
        if(!root) return "$";
        
        string s = "";
        
        s = s + to_string(root->data);
        s = s + "#";
        s = s + solve(root->left);
        s = s + "#";
        s = s + solve(root->right);
        s = s + "#";
        m[s]++;
        if(m[s]==2) ans.push_back(root);
        
        return s;
    }
    
    vector<Node*> printAllDups(Node* root)
    {
        m.clear();
        ans.clear();
        
        solve(root);
        return ans;
    }
};
