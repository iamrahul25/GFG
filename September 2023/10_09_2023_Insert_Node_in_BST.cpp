//Link: https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

class Solution
{
    public:
        Node* insert(Node* root, int data) {
            
            if(root==NULL){
                return new Node(data);
            }
            
            //If Node is Already Present
            if(data == root->data) return root;
            
            
            else if(data < root->data){
                root->left = insert(root->left, data);
            }
            
            else{
                root->right = insert(root->right, data);
            }
            
            return root;
        }

};
