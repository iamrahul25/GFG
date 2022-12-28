class Solution {
  public:
  
    //DP - To Store Sum+
    unordered_map<Node*,int> dp;
  
    int findsum(Node* root){
        if(root==NULL) return 0;
        
        if(dp.find(root)!=dp.end()) return dp[root];
        return dp[root] = root->data + findsum(root->left) +  findsum(root->right);
    }
    
    void preorder(Node* root, vector<int>&ans){
        if(root==NULL) return;
        
        ans.push_back(findsum(root));
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    
    
    int findLargestSubtreeSum(Node* root){
        vector<int> ans;
        preorder(root, ans);
        
        int maxx = INT_MIN;
        for(auto x: ans){
            maxx = max(maxx, x);
        }
        
        return maxx;
    }
};
