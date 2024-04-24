//Link: https://www.geeksforgeeks.org/problems/paths-to-reach-origin3850/1

class Solution {
public:

    //Approach 1: Using Recursion 
    int totalWays(int a, int b){
        if(a==0 && b==0) return 1;
        
        int x = 0, y=0;
        if(a>0) x = totalWays(a-1, b);
        if(b>0) y = totalWays(a,b-1);
        
        return x+y;
    }
    
    //Approach 2: Using Recursion + DP
    int totalWays2(long long a, long long b, vector<vector<int>>&dp){
        if(a==0 && b==0) return 1;
        
        if(dp[a][b]!=0) return dp[a][b];
        
        long long x = 0, y=0;
        if(a>0) x = totalWays2(a-1, b, dp);
        if(b>0) y = totalWays2(a,b-1, dp);
        
        return dp[a][b] = (x+y)%1000000007;
    }


    int ways(int x, int y){
        // return totalWays(x,y);
        
        vector<vector<int>> dp(501, vector<int>(501, 0));
        return totalWays2(x,y,dp);
    }
};
