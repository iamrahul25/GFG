//Link: https://practice.geeksforgeeks.org/problems/df12afc57250e7f6fc101aa9c272343184fe9859/1

class Solution{
public:

    //Approach -> Memoization/DP to Reduce Time Complexity from O(N^2) to O(N)

    int x;
    int count = 0;
    unordered_map<Node*, int> dp;
    
    int countDistinct(Node* root, int hash[]){
        if(root==NULL) return 0;
        
        hash[root->data]++;
        countDistinct(root->left, hash);
        countDistinct(root->right, hash);
        
        int n = 0;
        for(int i=0; i<26; i++){
            if(hash[i]) n++;
        }
        
        return n;
    }
    
    void preorder(Node* root){
        if(root==NULL) return;
        
        int c = 0;
        
        //Check in DP Table
        if(dp.find(root)!=dp.end()){
            c = dp[root];
        }
        else{
            int hash[26] = {0};
            c = countDistinct(root, hash);
        }
        
        // cout<<root->data<<" : "<<c<<endl;
        if(c<=x) count++;
        
        preorder(root->left);
        preorder(root->right);
    }

    int goodSubtrees(Node *root,int k){
        x = k;
        preorder(root);
        return count;
    }
};
