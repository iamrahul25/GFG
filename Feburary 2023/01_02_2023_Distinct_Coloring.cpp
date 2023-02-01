//Link: https://practice.geeksforgeeks.org/problems/844b4fdcd988ac5461324d62d43f7892749a113c/1
class Solution{   
public:

    long long mincost(int i, int rgb, int n, int R[], int G[], int B[], vector<vector<long long>>&dp){
        //Base Case: 
        if(i==n) return 0;
        
        //DP Table 
        if(dp[i][rgb]!=-1) return dp[i][rgb];
        
        long long r = R[i] + mincost(i+1, 0, n, R, G, B, dp);
        long long g = G[i] + mincost(i+1, 1, n, R, G, B, dp);
        long long b = B[i] + mincost(i+1, 2, n, R, G, B, dp);
        
        if(i==0){
            return dp[i][rgb] = min(r, min(g,b));
        }
        
        //Red Color
        if(rgb==0) return dp[i][rgb] = min(g,b);
        //Green Color
        else if(rgb==1) return dp[i][rgb] = min(r,b);
        //Blue Color
        else return dp[i][rgb] = min(r,g);
        
    }

    //DP Problem 
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        vector<vector<long long>> dp(N+1, vector<long long>(3, -1));
        return mincost(0, 0, N, r, g, b, dp);
    }
};
