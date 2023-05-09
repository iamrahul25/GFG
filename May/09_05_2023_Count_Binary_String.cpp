class Solution {
  public:
        const long long M = 1000000007; // modulo
        map<long long, long long> F;
    
        long long f(long long n) {
            if(F.count(n)) 
                return F[n];
            long long k=n/2;
            if (n%2==0) 
            { // n=2*k
                return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
            } 
            else 
            { // n=2*k+1
                return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
            }
        }
        int countStrings(long long int N) {
            if(N==0)
                return 0;
            F[0]=F[1]=1;
            return f(N+1);
        }
};
