//Link: https://www.geeksforgeeks.org/problems/you-and-your-books/1

class Solution {
  public:
    
    //Time: O(N) Space: O(1)
    long long max_Books(int arr[], int n, int k) {
        
        long long maxsum = 0;
        long long cursum = 0;
        
        for(int i=0; i<n; i++){
            if(arr[i]<=k){
                cursum = cursum + arr[i];
            }
            else{
                maxsum = max(maxsum, cursum);
                cursum = 0;
            }
        }
        
        maxsum = max(maxsum, cursum);
        return maxsum;
    }
};
