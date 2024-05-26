class Solution {

public:
    int findMinCost(string x, string y, int costX, int costY) {
        int n=x.size(),m=y.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(x[i-1]==y[j-1]) {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int cur=dp[n][m],res=0;
        if(n>=cur) res+=(n-cur)*costX;
        else res+=(n*costX);
        if(m>=cur) res+=(m-cur)*costY;
        else res+=(m*costY);
        return res;
    }
};
