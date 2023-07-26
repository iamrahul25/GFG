bool fun(Node *root, int k, int node,vector<int>&ds){
    
    if(root==NULL) return false;
    
    ds.push_back(root->data);
    if(root->data==node) { return true; }
    if(fun(root->left,k,node,ds) || fun(root->right,k,node,ds)) return true;
    ds.pop_back();
    return false;
}


int kthAncestor(Node *root, int k, int node)
{
   
    vector<int>ds;

    fun(root,k,node,ds);
    int s=ds.size();

    if(s-k-1<0) return -1;
   
    return ds[s-k-1];
    
}
