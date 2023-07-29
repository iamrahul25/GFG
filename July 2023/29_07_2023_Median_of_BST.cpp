void inorder(struct Node*root,vector<int>&ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

float findMedian(struct Node *root){
    vector<int>ans;
    inorder(root,ans);
    int n=ans.size();
    float soln;
    
    if(n%2==1) soln=ans[n/2];
    
    else{
        float sum=ans[n/2]+ans[(n-1)/2];
        soln=sum/2;
    }
    
    return soln;
}

//Link: https://practice.geeksforgeeks.org/problems/median-of-bst/1
