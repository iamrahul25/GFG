//Link: https://practice.geeksforgeeks.org/problems/78a6854c8a2915e05f236aa407dfaa1bbc8ae7d3/1

class Solution {
  public:
    int equalSum(int n, vector<int> &arr){
        
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }
        
        long long s = 0;
        
        for(int i=0; i<n; i++){
            if(s==sum-s-arr[i]) return i+1;
            s = s + arr[i];
        }
        
        return -1;
    }
};
