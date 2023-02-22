//Link: https://practice.geeksforgeeks.org/problems/95423710beef46bd66f8dbb48c510b2c320dab05/1


class Solution{
    public:
    void connect(Node *root){
        
        if(root==NULL) return;
       
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<Node*> arr(n);
            for(int i=0; i<n; i++){
                Node* front = q.front();
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);

                arr[i] = front;
                q.pop();
            }

            for(int i=0; i<n-1; i++){
                arr[i]->nextRight = arr[i+1];
            }
            arr[n-1]->nextRight = NULL;
        }
    }    
};
