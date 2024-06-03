//Link: https://www.geeksforgeeks.org/problems/trail-of-ones3242/1

class Solution {
  public:
    int mod=1000000007;
    int dp[100001][3][2];
    int solve(int n,int prev,bool cons){
        if(n<0) return 0;
        if(n==0) return cons;
        if(dp[n][prev][cons]!=-1) return dp[n][prev][cons];
        int first=0;
        if(prev==0) first=solve(n-1,0,true);
        else first=solve(n-1,0,cons);
        int second=solve(n-1,1,cons);
        
        return dp[n][prev][cons]=(first%mod+second%mod)%mod;
    }
    int numberOfConsecutiveOnes(int n) {
        memset(dp,-1,sizeof dp);
        return solve(n,2,false);
    }
};
