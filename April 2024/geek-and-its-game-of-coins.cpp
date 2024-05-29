//Link: https://www.geeksforgeeks.org/problems/geek-and-its-game-of-coins4043/1

class Solution {
  public:
    int findWinner(int n, int x, int y) {
        
        vector<int> dp(n+1,0);
       
       for(int i=0;i<=n;i++)
       {
           if(dp[i]==0)
           {
               if(i+1<=n)
                dp[i+1] = 1;
               if(i+x<=n)
                dp[i+x] = 1;
               if(i+y<=n)
                dp[i+y] = 1;
           }
       }
       return dp[n];
    }
};
