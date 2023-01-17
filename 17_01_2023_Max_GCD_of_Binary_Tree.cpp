//Problem Link: https://practice.geeksforgeeks.org/problems/6eb51dc638ee1b936f38d1ab4b2f7062d4425463/1

class Solution{
public:
    //Time: O(N)   Space: O(1)
    //Preorder Traversal of Tree
    void preorder(Node* root, int &maxgcd, int &ansnode){
        if(root==NULL){
            return;
        }
        
        if(root->left!=NULL and root->right!=NULL){
            int gcd = __gcd(root->left->data, root->right->data);
            if(gcd>maxgcd){
                maxgcd = gcd;
                ansnode = root->data;
            }
            else if(gcd==maxgcd){
                maxgcd = gcd;
                ansnode = max(ansnode, root->data);
            }
        }
        
        preorder(root->left, maxgcd, ansnode);
        preorder(root->right, maxgcd, ansnode);
    }
    
    //Main Function 
    int maxGCD( Node* root){
        int maxgcd = 0;
        int ansnode = 0;
        
        preorder(root, maxgcd, ansnode);
        
        return ansnode;
    }
};
