class Solution {
  public:
  
    //Time: O(N) Space: O(1)
    int getMaximum(int n, vector<int> &arr) {
        
        long long sum = 0;
        for(auto x: arr) sum = sum + x;
        
        int maxx = INT_MIN;
        for(int i=1; i<=n; i++){
            if(sum%i==0) maxx = max(i, maxx);
        }
        
        return maxx;
    }
};
