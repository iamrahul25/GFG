class Solution{
  public:
    // //Approach 1: Brute Force  Time: O(N^2) --- TLE Error!
    
    // int maxDistance(int arr[], int n){ 
    //     int maxx = INT_MIN;
    //     for(int i=0; i<n; i++){
    //         for(int j=i; j<n; j++){
    //             int value = abs(arr[i]-arr[j]) + abs(i-j);
    //             maxx = max(maxx, value);
    //         }
    //     }
        
    //     return maxx;
    // } 
    
    //Approach 2: Mathematics - By solving Modulus using Properites
    int maxDistance(int arr[], int n){ 
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        
        for(int i=0; i<n; i++){
            max1 = max(max1, arr[i] - i);
            min1 = min(min1, arr[i] - i);
            max2 = max(max2, arr[i] + i);
            min2 = min(min2, arr[i] + i);
        }
        
        return max((max1-min1),(max2-min2));
    }
};
