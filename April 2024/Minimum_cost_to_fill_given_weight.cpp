//Link: https://www.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1

class Solution {
  public:
    int minimumCost(int n, int w, vector<int> &cost) {
        vector<vector<long long>>dp(n+1,vector<long long>(w+1,0));
        for(int i=1;i<=w;i++)dp[0][i]=1e9;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(j>=i && cost[i-1]!=-1){
                    dp[i][j]=min(cost[i-1]+dp[i][j-i],dp[i-1][j]);
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][w]==1e9?-1:dp[n][w];
    }
};
