//Link: https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1

class Solution{
  public:
    
    //LCS - Longest Common Subsequnce!
    int LCS(string &X, string &Y){
        int m = X.length();
        int n = Y.length();
        int dp[m+1][n+1];
    
        for (int i=0; i<=m; i++){
            for (int j=0; j<=n; j++){
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else if (X[i-1] == Y[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    
        return dp[m][n];
    }
  
    //Application of LCS (Longest Common Subsequence) Problem: 
    int minimumNumberOfDeletions(string s) { 
        string r = s;
        reverse(r.begin(), r.end());
        return s.size() - LCS(r,s);
    } 
};
