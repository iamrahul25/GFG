//Link: https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1

class Solution{   
    
    public:
    
    //Time: O(N) Space: O(1) 
    //Similar But Easy to Spiral Matrix Question!
    vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m) {
        
        vector<int> ans;
        
        for(int i=0; i<m; i++) ans.push_back(matrix[0][i]);
        for(int i=1; i<n; i++) ans.push_back(matrix[i][m-1]);
        if(n>1) for(int i=m-2; i>=0; i--) ans.push_back(matrix[n-1][i]);
        if(m>1) for(int i=n-2; i>0; i--) ans.push_back(matrix[i][0]);
        
        return ans;
    }
};
