#define mod 1000000007

class Solution{
public:
    int nCr(int n, int r) {
        if (n < r) {
            return 0;
        }

        vector<vector<int>> dp(n + 1, vector<int>(r + 1, 0));
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= min(i, r); j++) {
                if (j == 0 || j == i) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
                    //nCr+(nC(r+1))=(n+1)C(r+1)
                }
            }
        }
    
        return dp[n][r];
    }
};

//Link: https://practice.geeksforgeeks.org/problems/ncr1019/1
