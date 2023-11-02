//Link: https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1

class Solution{
  public:
    
    //Time: O(N) Space: O(1)
    int minDist(int arr[], int n, int x, int y) {
        
        if(x==y) return -1;
        
        int a = -1;
        int b = -1;
        
        int ans = INT_MAX;
        
        for(int i=0; i<n; i++){
            if(arr[i]==x) a=i;
            if(arr[i]==y) b=i;
            
            if(a!=-1 and b!=-1){
                ans = min(ans, (abs(a-b)));
            }
        }
        
        if(ans==INT_MAX) return -1;
        return ans;
    }
};
