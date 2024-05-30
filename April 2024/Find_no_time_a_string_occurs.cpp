//Link: https://www.geeksforgeeks.org/problems/find-number-of-times-a-string-occurs-as-a-subsequence3020/1

class Solution {
      int mod=1000000007;
    
      public:
      vector<vector<int>>dp;
      int solve(int i,int j,int n,int m,string &s1,string &s2){
          if(j==m)return 1;
          if(i==n)return 0;
          if(dp[i][j]!=-1)return dp[i][j];
          int ans=0;
          if(s1[i]==s2[j])ans=(ans%mod+solve(i+1,j+1,n,m,s1,s2)%mod)%mod;
          ans=(ans%mod+solve(i+1,j,n,m,s1,s2)%mod)%mod;
          return dp[i][j]=ans;
      }
        int countWays(string s1, string s2) {
           int n=s1.size(),m=s2.size();
           dp=vector<vector<int>>(n+1,vector<int>(m+1,-1));
           return solve(0,0,n,m,s1,s2);
        }
};
