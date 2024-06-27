//Link: https://www.geeksforgeeks.org/problems/toeplitz-matrix/1

bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int n = mat.size();
    int m = mat[0].size();
    
    // Check diagonals starting from each row in the first column
    for(int row = 0; row < n; row++) {
        int i = row, j = 0;
        int num = mat[i][j];
        
        while(i < n && j < m) {
            if(mat[i++][j++] != num) return false;
        }
    }
    
    // Check diagonals starting from each column in the first row (excluding the first column)
    for(int col = 1; col < m; col++) {
        int i = 0, j = col;
        int num = mat[i][j];
        
        while(i < n && j < m) {
            if(mat[i++][j++] != num) return false;
        }
    }
    
    return true;
}
