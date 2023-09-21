class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    
    //DP - Problem  Time: O(N) Space: O(N)
    int recursion(int i, int n, int arr[], int dp[]){
        //Base Case: 
        if(i>=n) return 0;
        
        //Check in DP Table
        if(dp[i]!=-1) return dp[i];
        
        int pick = 0;
        int notpick = 0;
        
        //Pick
        pick = arr[i] + recursion(i+2, n, arr, dp);
        
        //Not Pick
        notpick = recursion(i+1, n, arr, dp);
        
        return dp[i] = max(pick, notpick);
    }
    
    int FindMaxSum(int arr[], int n){
        //Making DP
        int dp[n+1];
        memset(dp, -1, (n+1)*sizeof(dp[0]));
        
        return recursion(0,n,arr,dp);
    }
};
