//Link: https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1

class Solution{
public:

    int recursion(int i, int w, int val[], int wt[], vector<vector<int>>&dp){
        if(i<0 || w<=0){
            return 0;
        }
        
        if(dp[i][w]!=-1) return dp[i][w];
        
        int pick = 0;
        int notpick = 0;
        
        //Can Pick:
        if(w>=wt[i]){
            pick = val[i] + recursion(i, w-wt[i], val, wt, dp);
        }
        //Cannot Pick
        notpick = recursion(i-1, w, val, wt, dp);
        
        return dp[i][w] = max(pick, notpick);
    }


    int knapSack(int n, int w, int val[], int wt[]){
        //DP: 
        vector<vector<int>> dp(n+1, vector<int>(w+1, -1));
        return recursion(n-1,w,val,wt,dp);
    }
};
