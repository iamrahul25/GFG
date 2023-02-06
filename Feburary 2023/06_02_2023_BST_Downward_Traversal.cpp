//Link: https://practice.geeksforgeeks.org/problems/c85e3a573a7de6dfd18398def16d05387852b319/1

class Solution{
  long long int ans=0;
    
    void solve(Node *root , int cnt ){
        if(root==NULL) return;
        // cout<<ans<<" ";
        if(cnt==0) ans+=(root->data);
        solve(root->left , cnt-1);
        solve(root->right , cnt+1);
    }
public:
    long long int verticallyDownBST(Node *root,int target){
        Node* curr=root;
        while(curr!=NULL){
            if(curr->data==target)break;
            if(target<curr->data)
            curr=curr->left;
            else
            curr=curr->right;
        }
        // cout<<curr->data<<endl;
        if(curr==NULL) return -1;
       solve(curr,0);
       
       return ans-(curr->data);
        
    }
};
