//Link: https://practice.geeksforgeeks.org/problems/7a33c749a79327b2889d420dd80342fff33aac6d/1
class Solution{
public:	
	
	//DP Problem.
	int maxsum(int i, int n, int arr[], vector<int>&dp){
	    //Base Case: 
	    if(i>=n) return 0;
	    
	    if(dp[i]!=-1) return dp[i];
	    
	    int pick = arr[i] + maxsum(i+2, n, arr, dp);
	    int notpick = maxsum(i+1, n, arr, dp);
	    
	    return dp[i] = max(pick, notpick);
	}
	
	
	int findMaxSum(int *arr, int n){
	    
	    vector<int> dp(n+1, -1);
	    return maxsum(0,n,arr,dp);
	}
};
