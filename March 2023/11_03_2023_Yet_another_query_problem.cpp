class Solution {
  public:
  
    //Time: O(N^2) Space: O(N^2)
    vector<int> solveQueries(int n, int q, vector<int> &arr, vector<vector<int>> &queries) {
        
        int maxx = *max_element(arr.begin(), arr.end());
        vector<int> v(maxx+1, 0);
        vector<vector<int>> vec(n, vector<int>(maxx+1, 0));
        
        for(int i=0; i<n; i++){
            v[arr[i]]++;
            vec[i] = v;
        }
        
        vector<int> ans;
        for(int i=0; i<q; i++){
    
            int start = queries[i][0];
            int end = queries[i][1];
            int k = queries[i][2];
    
            int count = 0;
            for(int j=start; j<=end; j++){
                if(j==0){
                    if(vec[n-1][arr[j]]==k) count++;
                }
                else{
                    if(vec[n-1][arr[j]]-vec[j-1][arr[j]]==k) count++;
                }
            }
            
            ans.push_back(count);
        }
    
        return ans;
    }
};
