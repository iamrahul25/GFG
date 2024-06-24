//Link: https://www.geeksforgeeks.org/problems/summed-matrix5834/1

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        n = n+1;
        if(q <= n){
            return max(0ll,n - (n-q) - 1);
        }
        else{
            return max(0ll,n - (q-n) - 1);
        }
    }
};
