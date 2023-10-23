//Link: https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

class Solution{	

	public:
	
	//Working Fine: Iterative DP.
	int maxSumIS(int arr[], int n)  {  

        vector<vector<int>> DP(n+1,vector<int>(n+1,0));
        
	    for(int i=n-1;i>=0;i--){
	        for(int j=-1;j<i;j++){
	            int a,b;
	            a=b=0;
	            
	            a=DP[i+1][j+1];
	            if(j==-1 or arr[i]>arr[j])
	            b=arr[i]+DP[i+1][i+1];
	            
	            DP[i][j+1]=max(a,b);
	        }
	    }
	    
	    return DP[0][0];
    }  
	

	/* 
	//Gives TLE. 800 Test Case Pass outof 1000!
	int recursion(int prev, int curr, int n, int arr[], vector<vector<int>> &dp){
	    if(curr>n) return 0;
	    
	    if(dp[prev][curr]!=-1) return dp[prev][curr];
	    
	    int pick = 0;
	    int notpick = 0;
	   
	    //Can Pick
	    if(prev==0 || arr[curr-1]>arr[prev-1]){
	        pick = arr[curr-1] + recursion(curr, curr+1, n, arr, dp);
	        notpick = recursion(prev, curr+1, n, arr, dp);
	        return dp[prev][curr] = max(pick, notpick);
	    }
	    else{
	        //Cannot Pick
	        notpick = recursion(prev, curr+1, n, arr, dp);
	        return dp[prev][curr] = notpick;
	    }
	    
	}
	
	int maxSumIS(int arr[], int n)  {  
	    //DP
	    vector<vector<int>> dp(n+2, vector<int>(n+2, -1));
	    return recursion(0, 1, n, arr, dp);
	}  
	
	*/
};
