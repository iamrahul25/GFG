class Solution {
  public:
    long long int count(int v[], int n, int sum) {
        
        vector<vector<long long>> dp(n+1, vector<long long>(sum+1, -1));
        
        //Initialisation --- DP Table
        for(int i=0; i<n+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0) dp[i][j] = 0;
                if(j==0) dp[i][j] = 1;
            }
        }
    
        for(int i=1; i<n+1; i++){
    
            for(int j=1; j<sum+1; j++){  
    
                if(v[i-1]<=j){
                    dp[i][j] = dp[i][j - v[i-1]] + dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    
        return dp[n][sum];
    }
};
