//Link: https://practice.geeksforgeeks.org/problems/2e068e2342b9c9f40cfda1ed8e8119542d748fd8/1

class Solution{
    public:
    
    //Time: O(N*M) Space: O(1)
    pair<int,int> endPoints(vector<vector<int>> matrix){
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i = 0, j=0, d = 0;
        char arr[4] = {'R','D','L','U'};
        
        while((i>=0 && i<n) && (j>=0 and j<m)){
            
            if(matrix[i][j]==1){
                matrix[i][j] = 0;
                d = (d+1)%4;
            }
            
            if(arr[d]=='R') j++;
            else if(arr[d]=='D') i++;
            else if(arr[d]=='L') j--;
            else i--;
        }
        
        if(i==-1) i=0;
        else if(i==n) i=n-1;
        if(j==-1) j = 0;
        else if(j==m) j=m-1;
        
        return {i,j};
    }

};
