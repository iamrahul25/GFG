class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        
        if(node==NULL) return {};
        
        vector<int> ans;
        
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty()){
            
            int n = q.size();
            int maxx = INT_MIN;
            
            for(int i=0; i<n; i++){
                Node* front = q.front();
                
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
                maxx = max(maxx, front->data);
                q.pop();
            }
            
            ans.push_back(maxx);
        }
        
        return ans;
        
    }
};
