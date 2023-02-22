class Solution {
  public:
  
    long long solve(int n){
        int count = 4;
        long long res = 1;
        for(long long i = n; i >= 1; i--){
            if(count==0) break;
            if(__gcd(res, i) == 1) {
                res = res * i;
                count--;
            }
        }
        return res;
    }

    long long maxGcd(int n) {
       return max(solve(n), solve(n - 1));
    }
};
