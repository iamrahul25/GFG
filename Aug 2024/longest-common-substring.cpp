//Link: https://www.geeksforgeeks.org/problems/longest-common-substring1452/1

class Solution{
    public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        int n=str1.size();
        int m=str2.size();
        int maxi=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    maxi=max(maxi,dp[i][j]);
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        return maxi;
    }
};
