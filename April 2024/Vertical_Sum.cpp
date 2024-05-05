//Link: https://www.geeksforgeeks.org/problems/vertical-sum/1

class Solution{
  public:
    
    //Appraoch 1: Time: O(NlogN) Space: O(N)
    void preorder(Node* root, int x, map<int,int> &mp){
        if(root==NULL) return;
        
        if(mp.find(x)==mp.end()){
            mp[x] = root->data;
        }
        else{
            mp[x] = mp[x] + root->data;
        }
        
        preorder(root->left, x-1, mp);
        preorder(root->right, x+1, mp);
        
    }
  
    vector <int> verticalSum(Node *root) {
        map<int,int> mp;
        preorder(root,0,mp);
        vector<int> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
