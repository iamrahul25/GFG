class Solution{
  public:
    //Level Order Traversal of a Tree
    int maxLevelSum(Node* root) {
        
        queue<Node*> q;
        q.push(root);
        int maxsum = INT_MIN;
        
        while(!q.empty()){
            int n = q.size();
            int sum = 0;
            for(int i=0; i<n; i++){
                Node* front = q.front();
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
                sum = sum + front->data;
                q.pop();
            }
            maxsum = max(maxsum, sum);
        }
        
        return maxsum;
    }
};
