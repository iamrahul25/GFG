//Link: https://www.geeksforgeeks.org/problems/make-binary-tree/1

class Solution {
  public:
    void convert(Node *head, TreeNode *&root) {
        
        root = new TreeNode(head->data);
        Node* temp = head;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            
            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(temp->next){
                    TreeNode* l = new TreeNode(temp->next->data);
                    curr->left = l;
                    q.push(l);
                    temp=temp->next;
                }
                if(temp->next){
                    TreeNode* r = new TreeNode(temp->next->data);
                    curr->right = r;
                    q.push(r);
                    temp=temp->next;
                }
                curr=curr->left;
            }
        }
    }
};
