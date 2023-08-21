//Link: https://practice.geeksforgeeks.org/problems/surround-the-1s2505/1

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int ans = 0;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(matrix[i][j]==0) continue;
                
                int c = 0;
                
                //Top
                if(i>0 && matrix[i-1][j]==0) c++;
                
                //Bottom
                if(i<n-1 && matrix[i+1][j]==0) c++;
                
                //Left 
                if(j>0 && matrix[i][j-1]==0) c++;
                
                //Right
                if(j<m-1 && matrix[i][j+1]==0) c++;
                
                //Top Left
                if(i>0 && j>0 && matrix[i-1][j-1]==0) c++;
                
                //Top Right
                if(i>0 && j<m-1 && matrix[i-1][j+1]==0) c++;
                
                //Bottom Left
                if(i<n-1 && j>0 && matrix[i+1][j-1]==0) c++;
                
                //Bottom Right
                if(i<n-1 && j<m-1 && matrix[i+1][j+1]==0) c++;
                
                if(c!=0 && c%2==0) ans++;
            }
        }
        
        return ans;
    }
};
