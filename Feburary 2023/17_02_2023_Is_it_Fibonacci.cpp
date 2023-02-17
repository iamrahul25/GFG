// Link: https://practice.geeksforgeeks.org/problems/202d95ecdeec659401edc63dd952b1d37b989ab8/1

class Solution {
  public:
    long long solve(int n, int k, vector<long long> arr) {
        if(k>=n){
            return arr[n-1];
        }
        
        vector<long long> pfsum=arr;
        long long sum=0;
        for(auto x:arr){
            sum+=x;
        }
        
        pfsum.push_back(sum);
        
        for(long long i=k+1;i<=n;i++){
            sum+=pfsum[i-1];
            sum-=pfsum[i-k-1];
            pfsum.push_back(sum);
        }
        
        return pfsum[n-1];
    }
};
