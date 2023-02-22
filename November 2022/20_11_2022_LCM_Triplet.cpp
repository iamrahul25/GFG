
class Solution {
  public:
    long long lcmTriplets(long long N) {
        if(N<3) return N;
        
        //Odd Number
        else if(N%2==1) return N*(N-1)*(N-2);
        
        //Even Number
        else{
            if(__gcd(N,N-3)!=1) return (N-1)*(N-2)*(N-3);
            else return (N)*(N-1)*(N-3);
        }
    }
};
