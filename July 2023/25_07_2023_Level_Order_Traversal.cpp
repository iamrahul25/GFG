//Question of Level Order Traversal - Tree Problem. 
vector<int> findSpiral(Node *root){
    
    if(root==NULL) return {};
    
    vector<int> ans;
    int level = 0;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int n = q.size();
        vector<int> arr;
        
        for(int i=0; i<n; i++){
            Node* front = q.front();
            
            if(front!=NULL){
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
            }
            
            arr.push_back(front->data);
            q.pop();
        }
        
        if(level%2==0) reverse(arr.begin(),arr.end());
        for(int i=0; i<n; i++) ans.push_back(arr[i]);
        level++;
        
    }
    
    return ans;
}

//Link: https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1
