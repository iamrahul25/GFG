class Solution {
  public:
    int nthFibonacci(int n){
        long long m = 1000000007;
        
        long long a = 0;
        long long b = 1;
        long long c;
        
        for(int i=0; i<n; i++){
            c = (a + b)%m;
            a = b;
            b = c;
        }
        
        return a;
    }
};
