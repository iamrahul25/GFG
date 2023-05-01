class Solution{
public:

    string dfs(Node* root,unordered_map<string,int> &ump,int &ans){
        if(!root){
          return "#";
        }
        string str="";
        for(auto x:root->children){
            str += dfs(x,ump,ans) + ',';
        }
         string s = str + to_string(root->data);
         if(ump[s]==1){
             ans++;
         }
         ump[s]++;
         return s;
    }
    int duplicateSubtreeNaryTree(Node *root){
        int ans=0;
        unordered_map<string,int> ump;
        dfs(root,ump,ans);
        return ans;
    }
};
