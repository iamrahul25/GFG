class Solution {
  public:
    string longestPalin (string s) {
        int n = s.size();

        //DP Table
        vector<vector<int>> dp(n, vector<int>(n, 0));

        //Setting Initial Value of DP Table: 
        for(int i=0; i<n; i++) dp[i][i] = 1;
        
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]) dp[i][i+1] = 1;
        }

        for(int i=2; i<n; i++){
            for(int j=0; j<n-i; j++){
                if(s[j]==s[j+i] && dp[j+1][j+i-1]==1) dp[j][j+i] = 1;
            }
        }

        //Finding Maximum Length Answer:
        int low = 0, high = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(dp[i][j]==1 and ((j-i)>(high-low))){
                    low = i;
                    high = j;
                }
            }
        }

        return s.substr(low, high-low+1);
    }
};

//Link: https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
