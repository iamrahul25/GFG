//Link: https://practice.geeksforgeeks.org/problems/leaf-under-budget/1


class Solution{
public:

    //Approach 2: Using Level Order Traversal: Time: O(N) Space: O(N)
    
    //Approach 1: Time: O(NlogN) Space: O(N)
    void preorder(Node* root,int h, vector<int>&arr){
        
        if(root==NULL) return;
        
        if(root->left==NULL && root->right==NULL) arr.push_back(h);
        preorder(root->left,h+1, arr);
        preorder(root->right,h+1, arr);
    }


    int getCount(Node *root, int k){
        
        if(root->left==NULL && root->right==NULL) return 1;
        
        vector<int> arr;
        preorder(root,1, arr);
        
        sort(arr.begin(), arr.end());
        
        int ans = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=k){
                ans++;
                k=k-arr[i];
            }
            
            if(k<0) break;
        }
        
        return ans;
    }
};
