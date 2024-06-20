//Link: https://www.geeksforgeeks.org/problems/integral-points-in-triangle5026/1

class Solution {
  public:
    long long int gcd (long long int a,long long int b){
        if(a<b){
            return gcd(b,a);
        }
        if(b){
            return gcd(b, a%b);
        }
        return a;
    }
    long long int InternalCount(long long int p[], long long int q[],
                                long long int r[]) {
        // code here
        //A = l + b/2 -1
        //l = A - b/2 + 1;
        long long int Area = abs(p[0]*(q[1] - r[1]) + q[0]*(r[1] - p[1]) + r[0] * (p[1] - q[1]))/2;
        long long int boundaryPoints = gcd(abs(p[0]-q[0]), abs(p[1]-q[1])) + gcd(abs(q[0]-r[0]),abs(q[1]-r[1])) + gcd(abs(p[0]-r[0]), abs(p[1] - r[1]));
        long long int InternalPoints = Area + 1 - (boundaryPoints/2) ;
        return InternalPoints;
        
    }
};
