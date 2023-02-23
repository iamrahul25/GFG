//Link: https://practice.geeksforgeeks.org/problems/96161dfced02d544fc70c71d09b7a616fe726085/1

class Solution {
  public:
    
    long long m = 1000000007;
  
    //D.P -> Problem
    //Recursion + Memoization
    long long recursion(int i, int j, int row, int col, vector<vector<int>>&grid, vector<vector<long long>>&dp){
        //Reached Finish -> Base Case
        if(i==(row-1) and j==(col-1)) return 1;

        //Check DP Table
        if(dp[i][j]!=-1) return dp[i][j];

        long long down = 0;
        long long right = 0;

        if((i+1<row) && (grid[i+1][j]!=0)) down = recursion(i+1,j,row,col,grid,dp)%m;
        if((j+1<col) && (grid[i][j+1]!=0)) right = recursion(i,j+1,row,col,grid,dp)%m;

        return dp[i][j] = (down + right)%m;
    }
  
  
    int uniquePaths(int m, int n, vector<vector<int>> &grid){
        
        //Edge Case:
        if(grid[0][0]==0 || grid[m-1][n-1]==0) return 0;

        vector<vector<long long>> dp(m, vector<long long>(n, -1));
        return recursion(0, 0, m, n, grid, dp);
    }
};
