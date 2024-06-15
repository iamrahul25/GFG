//Link: https://www.geeksforgeeks.org/problems/mobile-numeric-keypad5456/1

class Solution {
  public:
    long long getCount(int n) {
        
        vector<vector<int>> adj = {
            {0, 8}, // 0 
            {1, 2, 4}, // 1 
            {2, 1, 3, 5}, // 2
            {3, 2, 6}, // 3
            {4, 1, 5, 7}, // 4 
            {5, 2, 4, 6, 8}, // 5 
            {6, 3, 5, 9}, // 6
            {7, 4, 8}, // 7 
            {8, 5, 7, 9, 0}, // 8 
            {9, 6, 8} // 9
        }; 
        
        long long dp[n+1][10]; 
        
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j <= 9; j++) {
                if(i == 1) dp[i][j] = 1; 
                else {
                    long long sum = 0; 
                    
                    for(auto &it : adj[j]) {
                        sum += dp[i-1][it]; 
                    }
                     
                    dp[i][j] = sum; 
                }
            }
        }
        
        long long ans = 0; 
        for(int j = 0; j <= 9; j++) {
            ans += dp[n][j]; 
        }
        return ans; 
    }
};
