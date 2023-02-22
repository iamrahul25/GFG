class Solution{
	public:
	
	//Time: O(2^N)   Space: O(N) - Stack Space
	void rec(int n, int sum, vector<int> &arr, vector<int> &v, vector<vector<int>> &ans){
    
        if(sum==0){
            ans.push_back(v);
            return;
        }
    
        if(n==0) return;
    
        //Picked 
        if(arr[n-1]<=sum){
            rec(n-1,sum,arr,v,ans);
    
            v.push_back(arr[n-1]);
            rec(n,sum-arr[n-1],arr,v,ans);
            v.pop_back();
        }
        
        else{
            rec(n-1,sum,arr,v,ans);
        }
    }

	
    vector<vector<int>> UniquePartitions(int n) {
        
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            arr[i] = i+1;
        }
    
        vector<vector<int>> ans;
        vector <int> v;
        rec(n, n, arr, v, ans);
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
