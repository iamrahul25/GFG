class Solution {
  public:
  
    //Time: O(sqrt(N)) Space: O(1)
    int isPerfectNumber(long long n) {
        long long sum = 0;
        
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                long long a = i;
                long long b = n/i;
                
                if(a==b){
                    sum = sum + a;
                }
                else{
                    sum = sum + a + b;
                }
            }
        }
        
        sum = sum - n;
        
        return (sum==n);
    }
};
