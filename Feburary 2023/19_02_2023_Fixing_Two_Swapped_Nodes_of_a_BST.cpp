//Link: https://practice.geeksforgeeks.org/problems/6c4053871794c5e7a0817d7eaf88d71c4bb4c2bc/1

class Solution {
  public:
    void solve(struct Node *root, vector<int>&arr){

        if(root==NULL){
            return;
        }
        solve(root->left,arr);
        arr.push_back(root->data);
        solve(root->right,arr);
    }

    void finalsolve(Node *root,vector<int>&arr,int &i,int n){
        if(root==NULL){
            return;
        }

        finalsolve(root->left,arr,i,n);
        root->data=arr[i];
        i++;
        finalsolve(root->right,arr,i,n);

    }

    struct Node *correctBST(struct Node *root) {

        vector<int>arr;
        solve(root,arr);
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i=0;
        finalsolve(root,arr,i,n);
        return root;
    }
};
