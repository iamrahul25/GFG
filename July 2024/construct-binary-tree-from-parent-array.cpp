//Link: https://www.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1

class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        // Your code here
        
       int n = parent.size();
       
       Node*root = nullptr;
       
       if(n == 0){
           return nullptr;
       }
       
       vector<Node*> node(n,nullptr);
       
       // create all nodese
       for(int i=0;i<n;i++){
           node[i] = new Node(i);
       }
       // create tree
       
       for(int i=0;i<n;i++){
           if(parent[i] == -1){
               root =  node[i];
           }
           else{
               Node* parentNode = node[parent[i]];
               
               if(parentNode->left == nullptr){
                   parentNode->left = node[i];
               }
               else{
                   parentNode->right = node[i];
               }
           }
       }
       return root;
    }
};
